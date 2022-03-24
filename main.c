#include "includes/libftprintf.h"

int main ()
{
	char	*input = "This is my %s, char %c";

	ft_printf(input, "string", "c");

	return (0);
}

