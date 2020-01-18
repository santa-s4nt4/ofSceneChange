#ifndef SampleSceneManager_h
#define SampleSceneManager_h

#include "SceneManager.cpp"
#include "SampleSceneElement.h"

class SampleSceneManager : public SceneManager {
public:
	void setup() override;
	void keyReleased(int key) override;
};
#endif