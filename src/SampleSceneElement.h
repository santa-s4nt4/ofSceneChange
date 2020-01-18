#ifndef SampleSceneElement_h
#define SampleSceneElement_h

#include "SceneElement.cpp"
class SampleSceneElement : public SceneElement {
public:
	void draw() override;
	SampleSceneElement();

private:
	ofColor backgroundColor;
};
#endif