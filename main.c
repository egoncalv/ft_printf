#include "includes/libftprintf.h"

int main ()
{
	char	*input = "This is my %c, nice, %c";

	ft_printf(input, "s", "c");

	return (0);
}

