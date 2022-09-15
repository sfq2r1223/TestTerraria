#include "Window.h"

#include <SFML/Graphics.hpp>
#include <iostream>

int main()
{
	try
	{
		Window wnd;
		wnd.setUp("terraria", sf::Vector2i(1280, 720));
		wnd.activated();
	}
	catch (std::runtime_error error)
	{
		std::cout << "--------------" << std::endl;
		std::cout << error.what() << std::endl;
		std::cout << "--------------" << std::endl;
	}
	return 0;
}