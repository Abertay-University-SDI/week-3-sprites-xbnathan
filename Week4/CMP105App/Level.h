#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/BaseLevel.h"
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include <string.h>
#include <iostream>
#include "Player.h"
#include "Enemy.h"
#include "Background.h"
#include "Cursor.h"


class Level : BaseLevel {
public:
	Level(sf::RenderWindow* win, Input* in);
	~Level();

	void handleInput(float dt) override;
	void update(float dt) override;
	void render() override;

private:
	// Level objects
	GameObject testSprite;
	sf::Texture texture;
	Player playerObject;
	Enemy goomba;
	Enemy beachBall;
	sf::Texture goombaTexture;
	sf::Texture beachBallTexture;

	Cursor cursor;
	sf::Texture cursorTexture;

	Background background;
	sf::Texture backgroundTexture;
};