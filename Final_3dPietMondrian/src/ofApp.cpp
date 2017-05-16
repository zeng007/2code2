#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    
    bUseEasyCam = false;
    
}

//--------------------------------------------------------------
void ofApp::update(){
    
}

//--------------------------------------------------------------
void ofApp::draw(){
    
    ofBackground(255,255,255);
    if (bUseEasyCam) {
        easyCam.begin();
    }else{
        cam.begin();
    }
    ofSetConeResolution(20, 2);
    ofSetCylinderResolution(20, 2);
    ofEnableDepthTest();
   
  
    
    ofSetColor(ofColor::white);//LEFT
    
    ofSetColor(231,6,4);//BOTTOM red
    ofDrawBox( 100, 0, 100,100,300,300);
    ofDrawBox(-200, -100, 50, 250, 350, -200);
    
   // ofSetColor(233,238,232);//FRONT white
    
    ofSetColor(31,33,110);//BACK blue
    ofDrawBox( 0, -100, 100,100,50,150);
    ofDrawBox(100, -150, 150, 200, 150, 250);
    ofDrawBox(500, 100, -50, 100, 70, 200);
    
    
    
    ofSetColor(247,206,4);//BACK yellow
    ofDrawBox( -100, -100, 150,200,150,150);
    ofDrawBox(100, 100, -50, 250, 200, 250);
    ofDrawBox(140, 350, -350, 80, 100, 100);
    
    
    ofSetColor(4, 2, 7); // black;
    ofDrawBox(50, 100, 0, 1200, 10, 10);
    ofDrawBox(100, 50, 50, 10, 800, 10);
    ofDrawBox(-100, -100, 50, 10, 10, 1000);
    
    
 
   // ofDisableDepthTest();
    if (bUseEasyCam) {
        easyCam.end();
    }else{
        cam.end();
    }
       string str = " ";
    if (bUseEasyCam) {
        str += "ofEasyCam";
    }else{
      
        str += "INSTRUCTIONS:";
        str += "\n\n";
        str += "\n\n";
        str += "     Mouse Left Button: Drag To Move\n";
        str += "     Mouse Right button: zoom\n";
        str += "\n";
        str += "\n";
        str += "    RIGHT      Right Key\n";
        str += "    LEFT       Left Key\n";
        str += "    TOP        Up Key\n";
        str += "    BOTTOM     Down Key\n";
        str += "    FRONT      Key f\n";
        str += "    BACK       Key b\n\n";
         str += "\n";
         str += "\n";
        str += "Current LookAt: ";
        
        switch (cam.getLookAt()) {
            case ofx2DCam::OFX2DCAM_FRONT:
                str+="FRONT";
                break;
            case ofx2DCam::OFX2DCAM_BACK:
                str+="BACK";
                break;
            case ofx2DCam::OFX2DCAM_LEFT:
                str+="LEFT";
                break;
            case ofx2DCam::OFX2DCAM_RIGHT:
                str+="RIGHT";
                break;
            case ofx2DCam::OFX2DCAM_TOP:
                str+="TOP";
                break;
            case ofx2DCam::OFX2DCAM_BOTTOM:
                str+="BOTTOM";
                break;
            default:
                break;
        }
        
    }
   

    ofDrawBitmapStringHighlight(str, 4,28, ofColor::darkGray,ofColor::white);
    
    str="Press the spacebar to switch between\n";
    str += "projective ofEasyCam and orthogonal ofx2DCam.\n";
  //  ofDrawBitmapStringHighlight(str, 4,12, ofColor::magenta, ofColor::black);
    
    
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
    if (key == ' ') {
        
        if (bUseEasyCam) {
            easyCam.disableMouseInput();
            cam.enableMouseInput();
        }else{
            easyCam.enableMouseInput();
            cam.disableMouseInput();
        }
        
        bUseEasyCam ^= true;
    }
    if (key == OF_KEY_LEFT) {
        cam.setLookAt(ofx2DCam::OFX2DCAM_LEFT);
    }else if (key == 'f') {
        cam.setLookAt(ofx2DCam::OFX2DCAM_FRONT);
    }else if (key == OF_KEY_RIGHT) {
        cam.setLookAt(ofx2DCam::OFX2DCAM_RIGHT);
    }else if (key == OF_KEY_UP) {
        cam.setLookAt(ofx2DCam::OFX2DCAM_TOP);
    }else if (key == OF_KEY_DOWN) {
        cam.setLookAt(ofx2DCam::OFX2DCAM_BOTTOM);
    }else if (key == 'b') {
        cam.setLookAt(ofx2DCam::OFX2DCAM_BACK);
    }
    

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y){
    
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
