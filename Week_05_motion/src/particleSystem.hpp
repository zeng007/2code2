//
//  system.hpp
//  Week_05_motion
//
//  Created by Scarlett Zeng on 4/30/17.
//
//

#pragma once
#include "ofMain.h"
#include "particle.hpp"

class particleSystem{
public:
    particleSystem(ofVec2f pos);
    
    void update(ofVec2f force);
    void draw();
    
    vector<particle> myParticles;
    
    const int MAX_SIZE = 100;
    ofVec2f myPos;
    
    
};
