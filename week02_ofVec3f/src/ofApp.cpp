#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(6);
    ofSetBackgroundColor(204, 230, 255);
    v1.set(50,30,15);
    v2.set(20,30,20);
    v3.set(0,0,0);
    v4.set(0,0,0);
}

//--------------------------------------------------------------
void ofApp::update(){
    v3+= v2;
    v4+= v1;
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(133, 133, 133);
    ofDrawBox(v3, 30);
    
    ofNoFill();
 
    ofDrawBox(v4,45);
    
    

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
