#include <iostream>
#include <iomanip>
#include "Tools.class.hpp"
#include "PhoneBook.class.hpp"

PhoneBook::PhoneBook(void)
{
	this->index = 0;
	this->indexTotal = 0;
	return ;
}

void	UNDEFINED_command(void)
{
	std::cout << "Enter a valid command --> (ADD|SEARCH|EXIT):" << std::endl;
}

void	PhoneBook::ADD_contact()
{
	this->index += 1;
	this->indexTotal += 1;
	if (this->index > 8)
		this->index %= 8;
	if (this->indexTotal > 8)
		this->indexTotal = 8;
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
	while ((id <= 0 || id > 8) || id > this->indexTotal)
	{
		
		std::cout << "None existant !" << std::endl;  
		std::cout << "Enter a valid index of contact: ";
		std::cin >> input_id;
		std::cout << input_id << std::endl;
		//infinite loop
		if (input_id.empty())
			return ;
		id = tool.ft_atoi(input_id);
		input_id.clear();
	}
	if (id <= this->indexTotal && id > 0)
	{
		std::cout << std::setw(10) << id << "|";
		(this->contacts[id - 1]).SHOW_contact();
		return ;
	}
}

void		PhoneBook::SEARCH_contact()
{
	int iter;

	iter = 0;
	std::cout << std::endl;
	while (iter < this->indexTotal)
	{
		std::cout << std::setw(10) << iter + 1 << "|";
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
