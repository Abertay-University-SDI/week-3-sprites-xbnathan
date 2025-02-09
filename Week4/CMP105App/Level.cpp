#include "Level.h"

Level::Level(sf::RenderWindow* win, Input* in)
{
	window = win;
	input = in;

	// initialise game objects
	texture.loadFromFile("gfx/dude_1.png");
	goombaTexture.loadFromFile("gfx/Goomba.png");
	beachBallTexture.loadFromFile("gfx/Beach_Ball.png");
	backgroundTexture.loadFromFile("gfx/Level1_1.png");

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

	/*view.setSize(10038, 675);
	view = window->getView();*/

	background.setWindow(window);
	background.setTexture(&backgroundTexture);
	background.setSize(sf::Vector2f(11038, 675));

	background.setInput(input);

	cursor.setInput(input);
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

	background.handleInput(dt);

	cursor.handleInput(dt);


	/*if (input->isPressed(sf::Keyboard::A))
	{
		playerObject.handleInput(dt);
	}*/

	window->setMouseCursorVisible(false);

	//std::cout << "(" + std::to_string(input->getMouseX()) + ", " + std::to_string(input->getMouseY()) + ")";
}

// Update game objects
void Level::update(float dt)
{
	playerObject.update(dt);
	goomba.update(dt);
	beachBall.update(dt);
	background.update(dt);

	cursor.update(dt);

	window->getSize();
}

// Render level
void Level::render()
{
	beginDraw();

	
	//window->draw(testSprite);

	// render the player
	window->draw(background);

	window->draw(playerObject);

	window->draw(goomba);

	window->draw(beachBall);

	window->draw(cursor);


	endDraw();
}
