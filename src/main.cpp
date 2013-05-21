#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

int main()
{
	sf::RenderWindow display {sf::VideoMode(854, 480), "Taylor Polynomials", sf::Style::Close};
	while(true)
	{
		while(display.pollEvent(event))
		{
			//handle event
		}

		//render
		display.display();
	}
}
