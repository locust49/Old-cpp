#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	int iter;
	Zombie *horde = new Zombie[N];

	iter = 0;
	while (iter < N)
	{
	//	horde[iter] = Zombie(name + std::to_string(iter));
		horde[iter].name = name +  std::to_string(iter); 
		iter += 1;
	}
	return (horde);
}
