#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	texture.loadFromFile("gfx/Mushroom.png");
	goombaTexture.loadFromFile("gfx/Goomba.png");
	beachBallTexture.loadFromFile("gfx/Beach_Ball.png");

	/*testSprite.setTexture(&texture);
	testSprite.setSize(sf::Vector2f(100, 100));
	testSprite.setPosition(100, 100);*/

	//Player playerObject;

	playerObject.setInput(input);
	playerObject.setWindow(window);
	// setup the player (size, position, texture etc etc)
	playerObject.setTexture(&texture);
	playerObject.setSize(sf::Vector2f(100, 100));
	playerObject.setPosition(500, 500);

	goomba.setInput(input);
	goomba.setWindow(window);
	// setup the player (size, position, texture etc etc)
	goomba.setTexture(&goombaTexture);
	goomba.setSize(sf::Vector2f(100, 100));
	goomba.setPosition(700, 450);

	beachBall.setInput(input);
	beachBall.setWindow(window);
	// setup the player (size, position, texture etc etc)
	beachBall.setTexture(&beachBallTexture);
	beachBall.setSize(sf::Vector2f(100, 100));
	beachBall.setPosition(200, 250);
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}

	playerObject.handleInput(dt);


	/*if (input->isPressed(sf::Keyboard::A))
	{
		playerObject.handleInput(dt);
	}*/
}

// Update game objects
void Level::update(float dt)
{
	playerObject.update(dt);
	goomba.update(dt);
	beachBall.update(dt);
}

// Render level
void Level::render()
{
	beginDraw();

	//window->draw(testSprite);

	// render the player
	window->draw(playerObject);

	window->draw(goomba);

	window->draw(beachBall);

	endDraw();
}
