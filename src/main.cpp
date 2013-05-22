#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

int main()
{
	sf::RenderWindow display {sf::VideoMode(854, 480), "Taylor Polynomials", sf::Style::Close};
	bool running {true};
	bool click {false}
	,    w     {false}
	,    a     {false}
	,    s     {false}
	,    d     {false};
	int mx {0}
	,   my {0};
	while(running)
	{
		sf::Event e;
		while(display.pollEvent(event))
		{
			//handle event
			switch(e.type)
			{
			case sf::Event:Closed:
				{
					running = false;
				} break;
			case sf::Event::KeyPressed:
				{
					switch(e.key.code)
					{
						//
					}
				} break;
			case sf::Event::KeyReleased:
				{
					switch(e.key.code)
					{
						//
					}
				} break;
			case sf::Event::MouseButtonPressed:
				{
					if(e.mouseButton.buton == sf::Mouse::Left)
					{
						click = true;
					}
				} break;
			case sf::Event::MouseButtonReleased:
				{
					if(e.mouseButton.buton == sf::Mouse::Left)
					{
						click = false;
					}
				} break;
			case sf::Event::MouseMoved:
				{
					mx = e.mouseMove.x;
					my = e.mouseMove.y;
				}
			}
		}

		//logic

		//render
		display.display();
	}
}
