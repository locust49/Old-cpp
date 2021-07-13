#include "Zombie.hpp"

int main(void)
{
	Zombie	souadZombie = Zombie("souad");
	Zombie	*luciZombie = new Zombie("luci");
	
	souadZombie.announce();
	luciZombie->announce();
	randomChump("git");
	delete luciZombie;
}
