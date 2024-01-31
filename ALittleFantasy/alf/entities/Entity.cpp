#include "Entity.h"

#include "../app/DrawableHandler.h"


namespace alf
{
	static Int COUNTER = 0;

	Entity::Entity()
	{
		_id = COUNTER;
		COUNTER++;
	}

	void Entity::Init()
	{
	}

	void Entity::Draw(DrawableHandler& drawable)
	{
		drawable.DrawSprite(_spriteId, _position, _scale);
	}

	void Entity::Update()
	{
	}

	void Entity::SetName(const SString& string)
	{
		_name = string;
	}

	const String& Entity::GetNameRef()
	{
		return _name;
	}

	String Entity::GetName()
	{
		return _name;
	}

	Int Entity::GetId()
	{
		return 0;
	}
}
