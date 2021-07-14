#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA
{
	private:
		std::string	_name;

	public:
		Weapon&		_myWeapon;
		void		attack();

		HumanA(std::string name, Weapon &myWeapon);
		~HumanA();
};

#endif
