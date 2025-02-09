#pragma once
#include "Framework/GameObject.h"

class Background : public GameObject
{
public:

	Background();

	void handleInput(float dt) override;
	void setWindow(sf::RenderWindow* win);

	sf::Texture backgroundTexture;

	sf::RenderWindow* window;
	Input* In;


private:


};

