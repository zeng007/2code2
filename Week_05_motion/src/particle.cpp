//
//  particle.cpp
//  Week_05_motion
//
//  Created by Scarlett Zeng on 4/30/17.
//
//

#include "particle.hpp"

particle::particle(ofVec2f pos){
    myPos = pos;
    myVel = ofVec2f(ofRandom(-2.f, 2.f), ofRandom(-2.f, 2.f));
    myLifeSpan = INTIAL_LIFE_SPAN;
}

void particle::update(float changeInVel){
    
    myVel += myAccel;
    myPos += myVel * changeInVel;
    
    if(myLifeSpan > 0){
        myLifeSpan -= 2.f;
    }
    
}
void particle::draw(){
    
    
    if(myLifeSpan > 90){
        ofSetColor(0,255,255);
    } else {
        ofSetColor(ofRandom(255), ofRandom(255), ofRandom(255));
    }
    float size = ofMap(myLifeSpan, 0, 100, 0, 5);
   
    ofDrawBox(myPos, ofRandom(1,200), ofRandom(1,200), ofRandom(1,200));
    
}
void particle::applyForce(ofVec2f force){
    myAccel = force;
}
