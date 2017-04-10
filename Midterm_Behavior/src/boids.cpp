#include "boids.h"
#include "ofMain.h"
float sq( float a ) {
    return a * a;
}

boid::boid( float x, float y, float vx, float vy, boid* others[], int num_others ) {
    this->r1 = 40;
    this->r2 = 80;
    this->r3 = 160;
    
    this->x = x;
    this->y = y;
    this->vx = vx;
    this->vy = vy;
    this->others = others;
    this->num_others = num_others;
}

void boid::key() {
    vx = ofRandom( -30, 30 );
    vy = ofRandom( -25, 25 );
    
}

void boid::update() {  // set the position of the random objects
    sep();
    align();
    coh();
 
    
    float l = sqrt( sq( vx ) + sq ( vy ));  //caculate the distance
    if (l > 4 ) {
        vx = 0.9 * vx;  //the value of vx and vy get smaller when the dist is bigger that 4
        vy = 0.9 * vy;
    }
    
    x += vx;   //final x,y == vx and vy
    y += vy;   // what is the meaning to set one variable that is == to another??
    
    if (x > ofGetWidth() - 30 ) { vx -= 2; }  // if get out of the right frame get
    if (x < 30 ) { vx += 2; }                // if out of the left frame get back
    if (y > ofGetHeight() -30 ) {vy -= 2; }   // if get lower than the screen get back
    if (y < 30) { vy += 2; }               //if get hight than the screen get back
}

void boid::sep() {   // avoid other objects
    int count = 0;   // set variable
    float sx = 0;    //set position to 0
    float sy = 0;
    
    for ( int i = 0; i < num_others; i ++ ) {
        
        float d = sqrt( sq( x - others[i]->x ) + sq( y - others[i]->y )); // caculate dist
        if (d < r1  && this != others[i]) {  // if dist < 40 and not equal to others
            
            count++;// count plus one
            sx += others[i]->x;
            sy += others[i]->y;
        }
    }
    
    if ( count  > 0 ){    //???
        sx = x - sx / count;
        sy = y - sy / count;
        
        float l = sqrt( sq( sx ) + sq ( sy ));
        sx =  1.2 * sx / l;
        sy = 1.2 *  sy / l;
        
    }
    
    vx += sx;
    vy += sy;
}

void boid::align() {  // swim together with other objects
    int count = 0;
    float dx = 0;
    float dy = 0;
    
    for ( int i = 0; i < num_others; i ++ ) {
        
        float d = sqrt( sq( x - others[i]->x ) + sq( y - others[i]->y ));
        if (d < r2 && this != others[i] ) {   // r2= 80
            count++;
            dx += others[i]->vx;
            dy += others[i]->vy;
            
        }
    }
    
    if ( count  > 0 ){
        float l = sqrt( sq( dx ) + sq ( dy ));
        dx = dx / l;
        dy = dy / l;
    }
    
    vx += dx;
    vy += dy;
}

void boid::coh() {  // trapped in a circle with others
    int count = 0;
    float sx = 0;
    float sy = 0;
    
    for ( int i = 0; i < num_others; i ++ ) {
        
        float d = sqrt( sq( x - others[i]->x ) + sq( y - others[i]->y ));
        if (d < r3  && d > r1 && this != others[i] ) {
            count++;
            sx += others[i]->x;
            sy += others[i]->y;
        }
    }
    
    if ( count  > 0 ){
        sx = x - sx / count;
        sy = y - sy / count;
        
        float l = sqrt( sq( sx ) + sq ( sy ));
        sx = sx / l;
        sy = sy / l;
        
    }
    
    vx -= sx;
    vy -= sy;
}


void boid::draw1() {
    ofSetLineWidth(0); // ignore the deafualt outline of the object
    
    glPushMatrix();  //style
    glTranslatef( x, y, 0 );
    float alpha = atan( vy/vx ) + ( vx < 0  ? PI : 0 ); // give angle to objects
    // NOT really understand !!!!
    glRotatef( alpha * 180 / PI , 0,0,1);
    ofSetColor(255,255,255); // set color of object
    ofFill();
    
    ofBeginShape();   // draw shapes
    //ofNoFill();
    ofDrawTriangle(10, 30, 10, 50, 70, 40);
    
    
    glPopMatrix();
    
}
void boid::draw2(){
    ofSetColor(255, 255, 255);
    
    
    
}

void boid::wall(){
   
  
   
    
}


