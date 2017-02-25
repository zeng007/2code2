//
//  planetClass.cpp
//  week03_motionSolar
//
//  Created by Scarlett Zeng on 2/21/17.
//
//

#include "PlanetClass.hpp"

void PlanetClass :: setup(){
    planetGroup.add(rotateSpeed.set("speed", 1.0 , 0.0, 9.0));
    planetGroup.add (posX.set("X", 0, 0, 600));
    planetGroup.add(posY.set("Y", 0,0, 600));
    planetGroup.add(red.set("red", 255,0, 255));
    planetGroup.add(green.set("green",255,0, 255));
    planetGroup.add(blue.set("blue", 255, 0 ,255));
    planetGroup.add(radius.set("radius", 50,50,50));


                    }
void PlanetClass:: update(){
    rotation++;
    //rotation increamenting constantly
    
}
void PlanetClass:: draw(){
   
    ofSetColor(red, green, blue);
    ofRotate(rotation * rotateSpeed);
    ofCircle(30, 30, radius);
    ofDrawBitmapString("Change the RGB value to customize your planet", 100, 100);
    
}void PlanetClass:: text(){
        ofSetColor(0,128,255);
        ofDrawBitmapString("Change the RGB value to customize your planet", 100, 100);

    }
    
