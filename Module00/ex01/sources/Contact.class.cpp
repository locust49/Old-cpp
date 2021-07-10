#include <iostream>
#include <iomanip>
#include "Contact.class.hpp"

Contact::Contact(void)
{
	return ;
}

void	Contact::CREATE_contact()
{
	std::cout << "first name: ";
	std::cin >> this->firstname;
	std::cout << "last name: ";
	std::cin >> this->lastname;
	std::cout << "nickname: ";
	std::cin >> this->nickname;
	std::cout << "phone number: ";
	std::cin >> this->phonenumber;
	std::cout << "darkest secret: ";
	std::cin >> this->darkestsecret;
}

void	Contact::SHOW_contact()
{
	std::cout << setprecision(10) << this->firstname << " | ";
	std::cout << setprecision(10) << this->lastname << " | ";
	std::cout << setprecision(10) << this->nickname << std::endl;
}

Contact::~Contact(void)
{
	return ;
}
