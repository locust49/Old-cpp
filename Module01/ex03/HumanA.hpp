#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA
{
	public:
		Weapon		myWeapon;
		std::string	_name;
		void attack();

		HumanA(std::string weaponName);
		~HumanA();
};

#endif
