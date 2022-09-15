#pragma once

#include "Block.h"

#include <SFML/Graphics.hpp>
#include <vector>

class GameWorld final
{
public:
	GameWorld() = default;
	~GameWorld() = default;

	void setUp(sf::Vector2f size);
	void ground();
	void draw(sf::RenderWindow& window);
	void mapInit();
private:
	std::vector<std::vector<Block>> world;
	std::vector<std::vector<sf::Sprite>> map;
	sf::Vector2f size;
};

