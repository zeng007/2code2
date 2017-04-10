#ifndef _BOID
#define _BOID
#include "ofxBox2d.h"
class boid {
private:
    float r1;
    float r2;
    float r3;
    
    float x,y;
    float vx,vy;
    boid** others;
    int num_others;
    
    
    ofxBox2d                                 box2d;   // the box2d world
    vector     <shared_ptr<ofxBox2dCircle> > circles; // default box2d circles
    vector     <shared_ptr<ofxBox2dRect> >   boxes;   // defalut box2d rects
       
public:
    //define variables
    boid( float x, float y, float vx, float vy, boid* others[], int num_others );
    // define functions
    void key();
    void update();
    void draw1();
    void draw2();
    void sep();
    void align();
    void coh();
    void text();
    void wall();
    
 
 };

#endif
