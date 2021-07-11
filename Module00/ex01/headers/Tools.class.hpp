#ifndef TOOLS_CLASS_HPP
# define TOOLS_CLASS_HPP
# include <iostream>

class Tools
{
	public:
		Tools(void);
		~Tools(void);

		int ft_atoi(std::string str);
		int ft_strlen(std::string str);
		std::string ft_strlimit(std::string str, int limit, char replacechar);
};

#endif
