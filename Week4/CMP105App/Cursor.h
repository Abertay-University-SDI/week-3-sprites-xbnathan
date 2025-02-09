#pragma once
#include "Framework/GameObject.h"

class Cursor : public GameObject
{
public:

	Cursor();

	void handleInput(float dt) override;
	void update(float dt) override;

	GameObject cursor;
	sf::Texture cursorTexture;

	Input* In;
};

