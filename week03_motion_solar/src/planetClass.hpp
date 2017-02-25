//
//  planetClass.hpp
//  week03_motionSolar
//
//  Created by Scarlett Zeng on 2/21/17.
//
//

#ifndef planetClass_hpp
#define planetClass_hpp

#include "ofMain.h"

class PlanetClass{

public:
    //remember to put public so that
    //other file can share the class
    void setup();
    void update();
    void draw();
    void text();
    
    ofParameterGroup planetGroup;
    //a group of parameter
    ofParameter<float> rotateSpeed;
    ofParameter<float> posX;
    ofParameter<float> posY;
    ofParameter<int> red;
    ofParameter<int> green;
    ofParameter<int> blue;
    ofParameter<int> radius;
   
    float rotation = 0.0;
    
};
#endif /* planetClass_hpp */
