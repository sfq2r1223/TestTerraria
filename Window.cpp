#include "Window.h"

void Window::setUp(std::string name, sf::Vector2i size)
{
	this->name = name;
	this->size = size;

	window.create(sf::VideoMode(size.x, size.y), name);
	setUpMap();
}

void Window::setUpMap()
{
	map.setUp(sf::Vector2f(100, 100));
}

void Window::eventHandling()
{
	sf::Event event;
	while (window.pollEvent(event))
		if (event.type == sf::Event::Closed)
			window.close();
}

void Window::depict()
{
	window.clear(sf::Color::White);
	update();
	window.display();
}

void Window::activated()
{
	while (window.isOpen())
	{
		eventHandling();
		depict();
	}
}

void Window::update()
{
	map.draw(window);
}