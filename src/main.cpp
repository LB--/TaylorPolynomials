#include <SFML/Audio.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>

int main()
{
	sf::RenderWindow display {sf::VideoMode(854, 480), "Taylor Polynomials", sf::Style::Close};

	sf::Texture menut, buttont, factoryt, conveyort, flippert;
	sf::Font arial;

	menut    .loadFromFile("menu.png"    );
	buttont  .loadFromFile("button.png"  );
	factoryt .loadFromFile("factory.png" );
	conveyort.loadFromFile("conveyor.png");
	flippert .loadFromFile("flipper.png" );
	arial    .loadFromFile("arial.ttf"   );

	sf::Sprite menu     {menut}
	,          button   {buttont}
	,          factory  {factoryt}
	,          conveyor {conveyort}
	,          fipper   {flippert};

	sf::Text snakebutton   {"Taylor's Snake"  , arial}
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
		while(display.pollEvent(e))
		{
			//handle event
			switch(e.type)
			{
			case sf::Event::Closed:
				{
					display.close();
				} break;
			case sf::Event::KeyPressed:
				{
					switch(e.key.code)
					{
					case sf::Keyboard::W: w = true; break;
					case sf::Keyboard::A: a = true; break;
					case sf::Keyboard::S: s = true; break;
					case sf::Keyboard::D: d = true; break;
					default: break;
					}
				} break;
			case sf::Event::KeyReleased:
				{
					switch(e.key.code)
					{
					case sf::Keyboard::W: w = false; break;
					case sf::Keyboard::A: a = false; break;
					case sf::Keyboard::S: s = false; break;
					case sf::Keyboard::D: d = false; break;
					default: break;
					}
				} break;
			case sf::Event::MouseButtonPressed:
				{
					if(e.mouseButton.button == sf::Mouse::Left)
					{
						click = true;
					}
				} break;
			case sf::Event::MouseButtonReleased:
				{
					if(e.mouseButton.button == sf::Mouse::Left)
					{
						click = false;
					}
				} break;
			case sf::Event::MouseMoved:
				{
					mx = e.mouseMove.x;
					my = e.mouseMove.y;
				} break;
			default: break;
			}
		}
		display.clear();

		//logic

		//render
		display.draw(menu);
		button.setPosition(854.0f/2.0f, (480.0f/3.0f)*1.0f);
		snakebutton.setPosition(button.getPosition());
		display.draw(button);
		display.draw(snakebutton);
		button.setPosition(854.0f/2.0f, (480.0f/3.0f)*2.0f);
		factorybutton.setPosition(button.getPosition());
		display.draw(button);
		display.draw(factorybutton);
		display.display();
	}
}
