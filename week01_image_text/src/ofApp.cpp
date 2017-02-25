#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    bunnyDog.load("IMG_8324.JPG");
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofBackground(204, 230, 255);
    bunnyDog.draw(ofGetMouseX()/5, ofGetMouseY()/5);

    ofSetColor(254, 204, 255);
    ofDrawBitmapString("My favorite food are", 150, 200);
     ofDrawBitmapString("carrots", 200, 300);
    ofDrawBitmapString("I need 100% attention", 400, 350);
    ofDrawBitmapString("Bone is fine! If no carrots", 500, 600);



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
