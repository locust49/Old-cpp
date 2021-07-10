#include <iostream>
#include <PhoneBook.class.hpp>

int		main(void)
{
	std::string	command;
	int			operation;
	PhoneBook	pb;

	operation = -1;
	std::cout << "Choose a command (ADD|SEARCH|EXIT) : ";
	std::cin >> command;
	while (!command.empty())
	{
		operation =	pb.compare_command(command);
		if (operation == 0)
			return (0);
		command.clear();
		std::cout << "Choose a command (ADD|SEARCH|EXIT) : ";
		std::cin >> command;
	}
	return(0);
}
