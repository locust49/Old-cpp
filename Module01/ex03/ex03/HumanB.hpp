#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB
{
	private:
		std::string	_name;

	public:
		Weapon*		_myWeapon;
		void		attack();
		void		setWeapon(Weapon &myWeapon);

		HumanB(std::string name);
		~HumanB();
};

#endif
