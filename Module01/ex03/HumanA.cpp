#include "HumanA.hpp"

HumanA::HumanA(std::string weaponName)
{
	myWeapon.setType(weaponName);
	return ;

}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with his " << myWeapon.getType() << std::endl;
}

HumanA::~HumanA()
{
	return ;
}		
