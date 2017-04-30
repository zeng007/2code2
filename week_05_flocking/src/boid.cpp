#include "boid.hpp"

boid::boid(){
    pos = ofVec3f(ofGetWindowWidth()/2 + ofRandom(-500 , 500), ofGetWindowHeight()/2 + ofRandom(-500,500), ofRandom(-500, 500));
    vel = ofVec3f(0);
}

void boid::update(){
    wrapAround();
}

void boid::drawBoid(){
    ofDrawCircle(pos, size);
}

void boid::move(){
    vel = vel + v1 + v2 + v3 + destination;
    vel = vel/2;
    pos = pos + vel;
}

void boid::wrapAround(){
    if(pos.x >= ofGetWindowWidth()){
        pos.x = 0;
    } else if (pos.x <=0){
        pos.x = ofGetWindowWidth();
    }
    
    if(pos.y >= ofGetWindowHeight()){
        pos.y = 0;
    } else if (pos.y <=0){
        pos.y = ofGetWindowHeight();
    }
    
}
