#pragma once

#include <SFML/Graphics.hpp>
#include <filesystem>

class Block
{
public:
	Block() = default;
	~Block() = default;

	void setUp(std::filesystem::path txt, sf::Vector2f size);
	void draw(sf::RenderWindow& window);
private:
	void setUpSprite();
private:
	std::filesystem::path txt;
	sf::Texture texture;
	sf::Sprite sprite;

	sf::Vector2f size;
	sf::Vector2f position;
};

