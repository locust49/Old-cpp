#include <iostream>
#include "Tools.class.hpp"

Tools::Tools(void)
{
	return ;
}

int	Tools::ft_atoi(std::string str)
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


