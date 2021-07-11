#include <iostream>
#include "Tools.class.hpp"

Tools::Tools(void)
{
	return ;
}

int	Tools::ft_strlen(std::string str)
{
	int counter;
	int	iter;

	counter = 0;
	iter = 0;
	while (str[iter])
	{
		iter += 1;
		counter += 1;
	}
	return (counter);
}

std::string	Tools::ft_strlimit(std::string str, int lim, char replace_char)
{
	std::string limited;
	int	iter;
	int len;

	limited = "";
	iter = -1;
	len = Tools::ft_strlen(str);
	if (len > lim)
	{
		while (++iter < lim - 1)
			limited += str[iter];
		limited += replace_char;
		return (limited);
	}
	return (str);
}

int			Tools::ft_atoi(std::string str)
{
	int i;
	int nbr;
	int	sign;

	i = 0;
	nbr = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\v'
			|| str[i] == '\f' || str[i] == '\r' || str[i] == '\n')
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
		i++;
	if (!(str[i] >= '0' && str[i] <= '9'))
		return (0);
	else
	{
		while (str[i] >= '0' && str[i] <= '9')
			nbr = nbr * 10 + (str[i++] - '0');
		return (nbr * sign);
	}
	return (0);
}

Tools::~Tools(void)
{
	return ;
}


