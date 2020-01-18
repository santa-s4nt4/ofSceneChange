#include "SampleSceneElement.h"

SampleSceneElement::SampleSceneElement() {
	this->backgroundColor = ofColor::fromHsb(ofRandom(255), 255, 255);
}

void SampleSceneElement::draw() {
	ofBackground(backgroundColor);
}