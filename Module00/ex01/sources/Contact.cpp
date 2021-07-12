#include <iostream>
#include <iomanip>
#include "Tools.hpp"
#include "Contact.hpp"

Contact::Contact(void)
{
	return ;
}

void	Contact::CREATE_contact()
{
	std::cout << "first name: ";
	std::cin >> this->firstname;
	if (this->firstname.empty())
		return ;
	std::cout << "last name: ";
	std::cin >> this->lastname;
	std::cout << "nickname: ";
	std::cin >> this->nickname;
	std::cout << "phone number: ";
	std::cin >> this->phonenumber;
	std::cout << "darkest secret: ";
	std::cin >> this->darkestsecret;
}

void	Contact::SHOW_contact_byId()
{
	std::cout << "first name: " << this->firstname << std::endl;
	std::cout << "last name: " << this->lastname << std::endl;
	std::cout << "nickname: " << this->nickname << std::endl;
	std::cout << "phone number: " << this->phonenumber << std::endl;
	std::cout << "darkest secret: " << this->darkestsecret << std::endl;
}

void	Contact::SHOW_contact()
{
	Tools tool;

	std::cout << std::setw(10) << tool.ft_strlimit(this->firstname, 10, '.') << "|";
	std::cout << std::setw(10) << tool.ft_strlimit(this->lastname, 10, '.') << "|";
	std::cout << std::setw(10) << tool.ft_strlimit(this->nickname, 10, '.') << std::endl;
}

Contact::~Contact(void)
{
	return ;
}
