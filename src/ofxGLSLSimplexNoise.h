#pragma once

#define STRINGIFY(A) #A
#include "ofMain.h"

class ofxGLSLSimplexNoise {
public:
	ofxGLSLSimplexNoise();

	void setup(int width, int height);
	void update();

	string frag;
	string vert;

	ofShader shader;
	ofVec2f freqR, freqG, freqB;
	ofVec3f speed;
	ofVec3f mul;
	ofVec3f add;
	ofVec3f colorR, colorG, colorB;
    float alpha;
    
	ofFbo fbo;
};
