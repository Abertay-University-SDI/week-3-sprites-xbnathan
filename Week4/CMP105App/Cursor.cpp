#include "Cursor.h"
#include <iostream>

Cursor::Cursor()
{
	cursorTexture.loadFromFile("gfx/icon.png");
	setTexture(&cursorTexture);
	setSize(sf::Vector2f(48, 48));
}

void Cursor::handleInput(float dt)
{
	
}

void Cursor::update(float dt)
{
	setPosition(input->getMouseX(), input->getMouseY());
}