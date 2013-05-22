#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

int main()
{
	sf::RenderWindow display {sf::VideoMode(854, 480), "Taylor Polynomials", sf::Style::Close};
	sf::Texture menu, button, factory, conveyor, flipper;
	menu    .loadFromFile{"menu.png"    };
	button  .loadFromFile{"button.png"  };
	factory .loadFromFile{"factory.png" };
	conveyor.loadFromFile{"conveyor.png"};
	flipper .loadFromFile{"flipper.png" };
	sf::Font arial; arial.loadFromFile("arial.ttf");
	sf::Text snakebutton   {"Taylor's Snake", arial}
	,        factorybutton {"Taylor's Factory", arial};
	bool click {false}
	,    w     {false}
	,    a     {false}
	,    s     {false}
	,    d     {false};
	int mx {0}
	,   my {0};
	while(display.isOpen())
	{
		sf::Event e;
		while(display.pollEvent(event))
		{
			//handle event
			switch(e.type)
			{
			case sf::Event:Closed:
				{
					display.close();
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
		display.clear();

		//logic

		//render
		display.draw(menu);
		button.setPosition(854f/2f, (480f/3f)*1f);
		snakebutton.setPosition(button.getPosition());
		display.draw(button);
		display.draw(snakebutton);
		button.setPosition(854f/2f, (480f/3f)*2f);
		factorybutton.setPosition(button.getPosition());
		display.draw(button);
		display.draw(factorybutton);
		display.display();
	}
}
