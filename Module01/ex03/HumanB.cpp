#include "HumanB.hpp"

HumanA::HumanB()
{
	return ;
}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with his " << myWeapon.getType() << std::endl;
}

HumanA::~HumanA()
{
	return ;
}		
