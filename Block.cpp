#include "Block.h"

void Block::setUp(std::filesystem::path txt, sf::Vector2f size)
{
	this->txt = txt;
	this->size = size;
	this->position = position;

	setUpSprite();
	sprite.setPosition(0, 0);
}

void Block::draw(sf::RenderWindow& window)
{
	window.draw(sprite);
}

void Block::setUpSprite()
{
	if (!texture.loadFromFile(txt.string()))
		throw std::runtime_error("ERROR: Block::setUpSprite: failed loading file " + txt.string());


	sprite.setTexture(texture);
	//sprite.setTextureRect(...);
}