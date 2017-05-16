#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    base.load("K_ANGRYKICK.WAV");
    sound.load("P_THEROCKET.WAV");
    high.load("P_TAILEND.WAV");
    
    base.setVolume(0.5);
    sound.setVolume(0.5);
    high.setVolume(0.5);

    base.setLoop(true);
    sound.setLoop(true);
    high.setLoop(true);
    
    base.setSpeed(0.105);
    sound.setSpeed(1);
    
}

//--------------------------------------------------------------
void ofApp::update(){
    ofSetBackgroundColor(204, 255, 230);
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetColor(51, 102, 255);
    ofDrawBitmapString("Press s to play the sound", 100,200);
    ofDrawBitmapString("Press b to play the base", 100,300);
    ofDrawBitmapString("Press d to play the drum", 100,400);

     

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    switch (key){
        case 'b':
            base.play();
           
                      break;
        case 's':
            sound.play();
            
            break;
        case 'd':
            high.play();
            break;

}
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
