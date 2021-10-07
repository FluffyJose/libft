#include <stdio.h>
#include <stdlib.h>

int	is_space(char c)
{
	return (c == ' '
		|| c == '\f'
		|| c == '\n'
		|| c == '\r'
		|| c == '\t'
		|| c == '\v');
}

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	ft_atoi(const char *nptr)
{
	int		result;
	char	sign;

	result = 0;
	sign = 1;
	while (*nptr && is_space(*nptr))
		nptr++;
	if (*nptr == '-')
		sign = -sign;
	if (*nptr == '-' || *nptr == '+')
		nptr++;
	while (*nptr && is_digit(*nptr))
	{
		result = result * 10 + (*nptr - '0');
		nptr++;
	}
	return (result * sign);
}
/*
int	main(void)
{
	char	*test = "  2147483647000000000";

	printf("%d\n", ft_atoi(test));
	printf("%d\n", atoi(test));
}
*/