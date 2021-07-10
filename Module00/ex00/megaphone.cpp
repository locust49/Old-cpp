
#include <stdio.h>
#include <iostream>

void scream(char* speech)
{
	while (*speech)
	{
		std::cout << (char)toupper(*speech);
		speech += 1;
	}
}

void use_megaphone(int number, char** speech)
{
	int iter = 0;

	if (number == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		while (++iter < number)
			scream(speech[iter]);
		std::cout << std::endl;
	}
}

int main( int argc, char *argv[])
{
	use_megaphone(argc, argv);
	return(1);
}
