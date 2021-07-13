#include <iostream>

int	main(void)
{
	std::string myStr = "HI THIS IS BRAIN";
	std::string	*stringPTR = &myStr;
	std::string	&stringREF = myStr;
	
	std::cout << "Display string's address: " << std::endl;
	std::cout << "Address of myStr using <     &myStr >  =  " << &myStr << std::endl;
	std::cout << "Address of myStr using <  stringPTR >  =  " << stringPTR << std::endl;
	std::cout << "Address of myStr using < &stringREF >  =  " << &stringREF << std::endl;

	std::cout << std::endl << "Display string : " << std::endl;
	std::cout << "< *strinPTR > contains = \"" << *stringPTR << "\"" << std::endl;
	std::cout << "< stringREF > contains = \"" << stringREF << "\"" << std::endl;
}
