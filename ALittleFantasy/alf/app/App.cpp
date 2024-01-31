#include "App.h"

#include "DrawableHandler.h"
#include "../entities/Entity.h"
#include "../entities/Avatar.h"


namespace alf
{
	void App::Start()
	{
		sf::RenderWindow window(sf::VideoMode(800, 600), "A Little Fantasy");

		sf::RectangleShape shape(sf::Vector2(50.0f, 50.0f));
		shape.setFillColor(sf::Color::Green);

		DrawableHandler drawable(window);

		auto avatar = S<Avatar>();

		SString name("Avatar");

		avatar->SetName(name);

		INFO(avatar->GetName());

		AddEntity(avatar);



		while (window.isOpen())
		{
			sf::Event event;
			while (window.pollEvent(event))
			{
				if (event.type == sf::Event::Closed)
				{
					window.close();
				}
				else if (event.type == sf::Event::KeyPressed)
				{
				}
			}

			window.clear();

			_Update();
			_Draw(drawable);

			window.display();
		}
	}

	void App::AddEntity(const S<Entity>& entity)
	{
		_entities[entity->GetName()] = entity;
	}

	void App::_Init()
	{
		for (const auto& [key, entity] : _entities)
		{
			entity->Init();
		}
	}

	void App::_Draw(DrawableHandler& drawable)
	{
		for (const auto& [key, entity] : _entities)
		{
			entity->Draw(drawable);
		}
	}

	void App::_Update()
	{
		INFO("Going to iterate: " << _entities.size());

		for (const auto& [key, entity] : _entities)
		{
			INFO(key << entity);
		}
	}
}
