#ifndef _TEST_APP
#define _TEST_APP
#include "boids.h"

#include "ofxBox2d.h"

#define BOIDS 100


class testApp : public ofBaseApp{
private:
    boid *boids[BOIDS];
    
public:
    void setup();
    void update();
    void draw();
    
    void keyPressed  (int key);
    void mousePressed  (int x, int y, int button);
    
    ofxBox2d                                 box2d;   // the box2d world
    vector     <shared_ptr<ofxBox2dCircle> > circles; // default box2d circles
    vector     <shared_ptr<ofxBox2dRect> >   boxes;   // defalut box2d rects

};

#endif
