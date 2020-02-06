#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	texture.loadFromFile("gfx/Mushroom.png");

	PlayerSprite.setTexture(&texture);
	PlayerSprite.setSize(sf::Vector2f(100, 100));
	PlayerSprite.setPosition(100, 100);
	PlayerSprite.setInput(input);
	PlayerSprite.setVelocity(200, 200);

	texture1.loadFromFile("gfx/Goomba.png");
	EnemySprite.setTexture(&texture1);
	EnemySprite.setSize(sf::Vector2f(100, 100));
	EnemySprite.setPosition(300, 200);
	EnemySprite.setVelocity(200, 200);
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
	PlayerSprite.handleInput(dt);
}

// Update game objects
void Level::update(float dt)
{
	
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(PlayerSprite);
	window->draw(EnemySprite);

	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}