#ifndef PHONEBOOK_CLASS_HPP
# define PHONEBOOK_CLASS_HPP
# include "Contact.class.hpp"

class PhoneBook
{
	private:
		Contact contacts[8];
		void ADD_contact();
		void SEARCH_contact_byId();
		void SEARCH_contact();
		void EXIT_phonebook();

	public:

		PhoneBook(void);
		~PhoneBook(void);

		int compare_command(std::string cmd);
		int index;
		int indexTotal;
};

#endif

