
#include "testApp.h"

#include "ofxBox2d.h"


//--------------------------------------------------------------
void testApp::setup(){
   
    ofSetVerticalSync(true);
    ofSetLogLevel(OF_LOG_NOTICE);
    ofDisableAntiAliasing();
    ofBackground(255,230,204);
    box2d.init();
    box2d.setGravity(0, 0);
    box2d.setFPS(60.0);
    box2d.createBounds();

    
    
    for( int i=0; i < BOIDS; i++) {
        boids[i] = new boid( ofRandom(0,ofGetWidth()), ofRandom(0,ofGetHeight()), ofRandom(-10,10), ofRandom(-10,10), boids, BOIDS );
    }
    ofSetFrameRate(20);  //speed of moving
   


    
    
 }

//--------------------------------------------------------------
void testApp::update(){
    
  
    
   
    box2d.update();
    ofVec2f mouse(ofGetMouseX(), ofGetMouseY());
    bool isAttracted = ofGetMousePressed() ? true : false;
    
    for(int i=0; i<boxes.size(); i++) {
        float dis = mouse.distance(boxes[i].get()->getPosition());
        
        if(isAttracted == true){
            boxes[i].get()->addAttractionPoint(mouse, 4.0);
        }else {
            box2d.setGravity(0, 10);
        }
       //b
        
        }for( int i=0; i < BOIDS; i++) {
        boids[i]->update();
    
    }
    

        
    

    
}

//--------------------------------------------------------------
void testApp::draw(){
    

 
    
    ofBackground(255,230,204);
    for( int i=0; i < BOIDS; i++) {
        boids[i]->draw1();
        boids[i]->draw2();
        ofSetColor(255,142,100);
        ofDrawBitmapString("Press Any Key To Reset", 100,100);
        ofDrawBitmapString("Press Mouse To Drop Boxes", 100, 120);

              
        }
    for(int i=0; i<boxes.size(); i++) {
        ofFill();
        ofSetColor(255,179,130);
        boxes[i].get()->draw();
        
    }


}
    //--------------------------------------------------------------
    void testApp::keyPressed(int key){
        
        
    
            for( int i=0; i < BOIDS; i++) {
                boids[i]->key();
                
            }
        }
void testApp::mousePressed(int x, int y, int button){
   
    float w = ofRandom(20, 35);
    float h = ofRandom(20, 35);
    shared_ptr<ofxBox2dRect> rect = shared_ptr<ofxBox2dRect>(new ofxBox2dRect);
    rect.get()->setPhysics(3.0, 0.53, 0.9);
    rect.get()->setup(box2d.getWorld(), mouseX, mouseY, w, h);
    boxes.push_back(rect);
  
}

    
