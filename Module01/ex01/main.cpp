#include "Zombie.hpp"

int main(void)
{
	Zombie *horde;
	int		iter;
	int		Total;

	Total = 4;
	iter = -1;
	horde = zombieHorde(Total, "Z0mB13_");
	while (++iter < Total)
		horde[iter].announce();
	delete [] horde;
}
