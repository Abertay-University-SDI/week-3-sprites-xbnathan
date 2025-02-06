#pragma once
#include "Framework/GameObject.h"

class Enemy : public GameObject
{
	public:

		Enemy();

		void handleInput(float dt) override;
		void update(float dt) override;

	private:
		sf::Vector2f enemyDir;
		float enemySpeed;
};

