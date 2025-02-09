#include "Background.h"
#include <iostream>

Background::Background()
{
	backgroundTexture.loadFromFile("gfx/Level1_1.png");
	setTexture(&backgroundTexture);
	setSize(sf::Vector2f(11038, 675));
}

void Background::setWindow(sf::RenderWindow* win)
{
	window = win;
}

void Background::handleInput(float dt)
{
	sf::View view = window->getView();

	if (input->isKeyDown(sf::Keyboard::D))
	{
		view.move(1000 * dt, 0);
		window->setView(view);
		//window->setView(sf::View(sf::FloatRect(+100 * dt, 0, 1200, 675)));
		
	}

	if (input->isKeyDown(sf::Keyboard::A))
	{
		view.move(-1000 * dt, 0);
		window->setView(view);
		//window->setView(sf::View(sf::FloatRect(-100 * dt, 0, 1200, 675)));
	}
}
