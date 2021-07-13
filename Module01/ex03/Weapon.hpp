#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon
{
	public:
		std::string _type;
		std::string	&getType();
		void		setType(std::string type);

		Weapon();
		Weapon(std::string type);
		~Weapon();
};

#endif
