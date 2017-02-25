#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofBackground(255,179,120);
    pointPositionX =0;
    pointPositionY =0;
    velocity = 0;
    friction= 0.5;
}

//--------------------------------------------------------------
void ofApp::update(){
    velocity+= friction;
    pointPositionX += velocity;
     pointPositionY += velocity;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(255,102,102);
    //    ofNoFill();
    for(i=0; i<40;i++){
    ofDrawLine(ofGetWindowWidth()/2,ofGetHeight()/2, pointPositionX+i*100, pointPositionY+i*100);
        
    
    }
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
    
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
   
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
    
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}
