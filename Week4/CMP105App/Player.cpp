#include "Player.h"
#include <iostream>

Player::Player()
{
	playerSpeed = 250.f;
	playerDir = sf::Vector2f(1, 1);
}


void Player::handleInput(float dt)
{
	
	if (input->isKeyDown(sf::Keyboard::W))
	{
		std::cout << "w pressed\n";
		move(0, -(playerSpeed * dt));
	}

	if (input->isKeyDown(sf::Keyboard::S))
	{
		move(0, playerSpeed * dt);
	}

	if (input->isKeyDown(sf::Keyboard::A))
	{
		move(-(playerSpeed * dt), 0);
	}

	if (input->isKeyDown(sf::Keyboard::D))
	{
		move(playerSpeed * dt, 0);
	}
}

void Player::update(float dt)
{
	if (getPosition().x + getGlobalBounds().width > window->getSize().x)
	{
		move(-playerSpeed * dt, 0);
	}

	if (getPosition().x < 0)
	{
		move(playerSpeed * dt, 0);
	}

	if (getPosition().y + getGlobalBounds().height > window->getSize().y)
	{
		move(0, -playerSpeed * dt);
	}

	if (getPosition().y < 0)
	{
		move(0, playerSpeed * dt);
	}
}
