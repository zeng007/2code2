#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetBackgroundColor(255, 255, 255);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
   
    // testing five different ofGraphics
    
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    ofSetColor(51, 102, 255);
    ofDrawBox(100, 100, 100, 60);
    ofDrawCone(20, 20, 10, 20, 80);
    ofDrawAxis(20);
    ofDrawGrid();
    ofNoFill();
    ofDrawCurve(-300, 200, -100, 100, -400, 300, 400, 1500);
    ofDrawCurve(300, -200, 100, -100, 400, -300, -400, -1500);
    ofDrawCircle(-100, 300, 70);
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
