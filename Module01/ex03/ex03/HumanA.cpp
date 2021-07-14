#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& myWeapon) : _myWeapon(myWeapon) 
{
	_name = name;
	return ;
};

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with his " << this->_myWeapon.getType() << std::endl;
}

HumanA::~HumanA()
{
	return ;
}		
