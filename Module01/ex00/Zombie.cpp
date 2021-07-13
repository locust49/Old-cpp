#include "Zombie.hpp"

Zombie::Zombie()
{
	return ;
}

		
Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << "<" << this->name << "> has risen." << std::endl; 
	return ;
}

void Zombie::announce()
{
	std::cout << "<" << this->name << "> BraiiiiiiinnnzzzZ..." << std::endl; 
}

Zombie::~Zombie()
{
	std::cout << "<" << this->name << "> died starving brain." << std::endl; 
	return ;
}
