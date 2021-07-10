#include <iostream>
#include "Tools.class.hpp"
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
	return ;
}

void	UNDEFINED_command(void)
{
	std::cout << "Enter a valid command --> (ADD|SEARCH|EXIT):" << std::endl;
}

void	PhoneBook::ADD_contact()
{
	this->index += 1;
	if (this->index > 8)
		this->index %= 8;
	this->contacts[this->index - 1].CREATE_contact();
}


void		PhoneBook::SEARCH_contact_byId()
{
	std::string input_id;
	int id;
	Tools tool;

	if (this->index == 0)
	{
		std::cout << "No registred contact yet !" << std::endl;
		return ;
	}

	std::cout << "Enter Index of Contact: ";
	std::cin >> input_id;
	id = tool.ft_atoi(input_id);
	std::cout << id << std::endl;
	while ((id <= 0 || id > 8) || id > this->index)
	{
		
		std::cout << "None existant !" << std::endl;  
		std::cout << "Enter a valid index of contact: ";
		std::cin >> input_id;
		id = tool.ft_atoi(input_id);
	}
	if (id <= this->index && id > 0)
	{
		(this->contacts[id - 1]).SHOW_contact();
		return ;
	}
}

void		PhoneBook::SEARCH_contact()
{
	int iter = 0;
	while (iter < this->index)
	{
		this->contacts[iter].SHOW_contact();
		iter += 1;
	}
	PhoneBook::SEARCH_contact_byId();
}

void		PhoneBook::EXIT_phonebook()
{
	std::cout << "bye" << std::endl;
}

int		PhoneBook::compare_command(std::string cmd)
{
	if (!(cmd.compare("EXIT"))) 
	{
		EXIT_phonebook();
		return (0);
	}
	if (!(cmd.compare("ADD")))
		ADD_contact();
	else if (!(cmd.compare("SEARCH")))
		SEARCH_contact();
	else
		UNDEFINED_command();
	return (1);
}

PhoneBook::~PhoneBook(void)
{
	this->index = 0;
	return ;
}
