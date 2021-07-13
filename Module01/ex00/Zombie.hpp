#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class	Zombie
{
	public:
		std::string name;

		Zombie();
		Zombie(std::string name);
		~Zombie();
		
		void announce();
};


void	randomChump( std::string name );
Zombie	*newZombie( std::string name );
#endif
