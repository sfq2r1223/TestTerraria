#pragma once

#include "GameWorld.h"

#include <SFML/Graphics.hpp>

class Window final
{
public:
	Window() = default;
	~Window() = default;

	void setUp(std::string name, sf::Vector2i size);
	void activated();
private:
	void eventHandling();
	void depict();
	void setUpMap();
	void update();
private:
	sf::RenderWindow window;
	std::string name;
	sf::Vector2i size;

	GameWorld map;
};