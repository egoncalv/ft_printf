#include "includes/libftprintf.h"
#include <stdio.h>
int main ()
{
	int	*arg = "aasdasda";
	printf("\n My Length: %d\n", ft_printf("1234 chars %p", arg));
	printf("\n Printf Length: %d\n", printf("1234 chars %p", arg));
	return (0);
}

