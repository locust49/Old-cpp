#ifndef CONTACT_CLASS_HPP
# define CONTACT_CLASS_HPP

class Contact
{
	private:
	   	std::string firstname;
		std::string lastname;
		std::string nickname;
		std::string phonenumber;
		std::string darkestsecret;

	public:
		Contact(void);
		~Contact(void);

		void CREATE_contact();
		void SHOW_contact();
};

#endif
