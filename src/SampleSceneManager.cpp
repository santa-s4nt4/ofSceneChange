#include "SampleSceneManager.h"

void SampleSceneManager::setup() {
	for (int i = 0; i < 5; i++) {
		this->elements.push_back(new SampleSceneElement());
	}
	init();
}

void SampleSceneManager::keyReleased(int key) {
	switch (key) {
	case OF_KEY_RETURN:
		changeElement(ofRandom(5));
		break;
	default:
		break;
	}
}