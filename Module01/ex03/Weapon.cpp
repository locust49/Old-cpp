#include "Weapon.hpp"

Weapon::Weapon()
{
	return ;
}

Weapon::Weapon(std::string type)
{
	this->_type = type;
	return ;
}

std::string& Weapon::getType()
{
	std::string &typeRef = _type;
	return (typeRef);
}

void		Weapon::setType(std::string type)
{
	_type = type;
}

Weapon::~Weapon()
{
	return ;
}
