//
//  boid.hpp
//  week_05_flocking
//
//  Created by Scarlett Zeng on 4/30/17.
//
//

#pragma once
#include "ofMain.h"

class boid{
public:
    boid();
    void update();
    void drawBoid();
    void move();
    void wrapAround();
    
    
    ofVec3f pos, vel;
    ofVec3f v1, v2, v3;
    ofVec3f destination;
    
    
    
    int size = ofRandom(40);
    float friction = 1.5;
};
