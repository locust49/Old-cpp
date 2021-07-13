#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
	public:
		Weapon		myWeapon;
		std::string	_name;
		void attack();

		HumanB();
		~HumanB();
};

#endif
