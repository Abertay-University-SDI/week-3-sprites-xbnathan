#include "Enemy.h"
#include <iostream>

Enemy::Enemy()
{
	enemySpeed = 250.f;
	enemyDir = sf::Vector2f(1, 1);
}

void Enemy::handleInput(float dt)
{

}

void Enemy::update(float dt)
{
	move(enemyDir.x * enemySpeed * dt, enemyDir.y * enemySpeed * dt);

	if (getPosition().x > 11038|| getPosition().x < 0)
	{
		enemyDir.x *= -1;
	}

	if (getPosition().y < 0 || getPosition().y + getGlobalBounds().height > window->getSize().y)
	{
		enemyDir.y *= -1;
	}
}

