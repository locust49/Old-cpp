#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	return ;
}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with his " << _myWeapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &myWeapon)
{
	this->_myWeapon = &myWeapon;
//	this->_myWeapon.setType(myWeapon.getType());
}

HumanB::~HumanB()
{
	return ;
}		
