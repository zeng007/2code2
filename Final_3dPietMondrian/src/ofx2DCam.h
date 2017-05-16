//
//  ofx2DCam.hpp
//  Final_04
//
//  Created by Scarlett Zeng on 5/14/17.
//
//

#pragma once
#include "ofMain.h"


class ofx2DCam {
public:
    
    enum LookAt{
        OFX2DCAM_FRONT =0,
        OFX2DCAM_BACK,
        OFX2DCAM_LEFT,
        OFX2DCAM_RIGHT,
        OFX2DCAM_TOP,
        OFX2DCAM_BOTTOM
    };
    ofx2DCam();
    ~ofx2DCam();
    
    virtual void begin(ofRectangle viewport = ofGetCurrentViewport());
    virtual void end();
    void reset();
    //-------   mouse
    void enableMouseInput(bool e = true);
    void disableMouseInput();
    bool getMouseInputEnabled();
    
    void mousePressed(ofMouseEventArgs & mouse);
    void mouseReleased(ofMouseEventArgs & mouse);
    void mouseDragged(ofMouseEventArgs & mouse);
    void mouseScrolled(ofMouseEventArgs & mouse);
    
    //-------   getters/setters
    ofVec3f getTranslation(){return translation;}
    float getScale(){return scale;}
    
    void setLookAt(LookAt l);
    LookAt getLookAt();
    
    void update();
    void drawDebug();
    
    void setDragSensitivity(float s);
    float getDragSensitivity(){return dragSensitivity;}
    
    void  setScrollSensitivity(float s);
    float getScrollSensitivity(){return scrollSensitivity;}
    
    void setDrag(float drag);
    float getDrag() const;
    
    void setNearClip(float near);
    float getNearClip(){return nearClip;}
    
    void setFarClip(float far);
    float getFarClip(){return farClip;}
    
    //-------   parameters
    ofParameterGroup parameters;
    
    //-------   utils
    ofVec3f screenToWorld(ofVec3f screen);
protected:
    
    ofVec3f orientation;
    void enableMouseInputCB(bool &e);
    ofRectangle viewport;
    bool bApplyInertia;
    bool bDoTranslate;
    bool bDoScale;
    bool bDoScrollZoom;
    bool bMouseInputEnabled;
    bool bDistanceSet;
    bool bEventsSet;
    ofVec3f move;
    float scale, clicScale;
    
    ofVec3f translation, clicTranslation;
    ofParameter<bool> bEnableMouse;
    ofParameter<float> dragSensitivity, scrollSensitivity, drag, farClip, nearClip;
    
    ofVec2f prevMouse, clicPoint;
    
    ofVec2f mouseVel;
    
    void update(ofEventArgs & args);
    
    void updateMouse();
    
    ofMatrix4x4 orientationMatrix;
    
    unsigned long lastTap;
    
    LookAt lookAt;
    
    static ofMatrix4x4 FM, BM, LM, RM, TM, BoM;
    
private:
    
    
};
