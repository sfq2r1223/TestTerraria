#include "GameWorld.h"

void GameWorld::setUp(sf::Vector2f size)
{
	this->size = size;

	mapInit();
}

void GameWorld::ground()
{
	world.resize(static_cast<int>(size.y));
	for (std::size_t i = 0; i < size.y; ++i)
		world.at(i).resize(static_cast<int>(size.x));

	for (std::size_t i = static_cast<int>(size.y) / 2; i < size.y; ++i)
		for (std::size_t j = 0; j < size.x; ++j)
		{
			Block block;
			block.setUp("ground.png", sf::Vector2f(50, 50));
			world.at(i).push_back(block);
		}
}

void GameWorld::mapInit()//*
{
	ground();
}

void GameWorld::draw(sf::RenderWindow& window)
{
	for (std::size_t i = 0; i < size.y; ++i)
		for (std::size_t j = 0; j < size.x; ++j)
			world.at(i).at(j).draw(window);
}