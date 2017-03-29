#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetVerticalSync(true);
    ofSetLogLevel(OF_LOG_NOTICE);
    ofDisableAntiAliasing();
    ofBackground(255,230,204);
    box2d.init();
    box2d.setGravity(0, 0);
    box2d.setFPS(60.0);
    box2d.createBounds();
    
}

//--------------------------------------------------------------
void ofApp::update(){
   
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
        
    }
    
    
}

//--------------------------------------------------------------
void ofApp::draw(){
   
    glPushMatrix();
    ofSetColor(255, 143, 31);
    ofDrawBitmapString("Press Command To Drop Boxes", 20, 20);
    glPopMatrix();

    for(int i=0; i<boxes.size(); i++) {
        ofFill();
        ofSetColor(255,148,41);
        boxes[i].get()->draw();
      
    }
    
}


//--------------------------------------------------------------
void ofApp::keyPressed(int key){
    
    if(key == OF_KEY_LEFT_COMMAND) {
        float w = ofRandom(20, 30);
        float h = ofRandom(20, 30);
        shared_ptr<ofxBox2dRect> rect = shared_ptr<ofxBox2dRect>(new ofxBox2dRect);
        rect.get()->setPhysics(3.0, 0.53, 0.9);
        rect.get()->setup(box2d.getWorld(), mouseX, mouseY, w, h);
        boxes.push_back(rect);
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
