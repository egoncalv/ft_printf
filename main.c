#include "includes/ft_printf.h"
#include <stdio.h>

int main ()
{
	printf("\n My Length: %d\n", ft_printf("1234 chars %u", 123));
	printf("\n Printf Length: %d\n", printf("1234 chars %u", 123));
	return (0);
}

