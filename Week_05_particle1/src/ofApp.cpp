#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    gui.setup();
    gui.add(positionX.set("X", 0.0, 0.0, 30.0));
    gui.add(positionY.set("Y", 0.0, 0.0, 30.0));
    ofSetBackgroundColor(255, 255, 204);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    gui.draw();
    
    
    
    float speed= 0.1;
    for(int i=0; i<100; i++){
        float posX = i* positionX;
        float posY = i* positionY;
        float width= ofGetWidth();
        float height= ofGetHeight();
        
        
        float x= width * ofNoise(ofGetElapsedTimef() *
                                 speed + posX);
        float y= height * ofNoise(ofGetElapsedTimef() *
                                  speed + posY);
        
        ofSetColor(102, 204, 255);
        ofSetColor(255, 174, 120);
        ofDrawCircle(x, y, ofRandom(0.01, 10));
        
        
        
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
void ofApp::windowResized(int w, int h){
    
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
    
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 
    
}
