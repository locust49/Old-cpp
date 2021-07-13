#include "Zombie.hpp"
#include<string>  

Zombie::Zombie()
{
	std::cout << "<Z0mB13_X> wild zombie appears." << std::endl;
	std::cout << "Joinin the horde soon.. " << std::endl;
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
