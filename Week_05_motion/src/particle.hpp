//
//  particle.hpp
//  Week_05_motion
//
//  Created by Scarlett Zeng on 4/30/17.
//
//

#pragma once
#include "ofMain.h"

class particle {
public:
    particle(ofVec2f pos);
    void update(float changeInVel);
    void draw();
    void applyForce(ofVec2f force);
    
    ofVec2f myPos, myVel, myAccel;
    float myLifeSpan;
    
    const float INTIAL_LIFE_SPAN = 100.0f;
};
