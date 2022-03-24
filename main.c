#include "includes/libftprintf.h"

int main ()
{
	char	*input = "This is my %i ha %i ha %i";

	ft_printf(input, 10, 20, 30);

	return (0);
}

