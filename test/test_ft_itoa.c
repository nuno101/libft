#include <stdio.h>
#include "../ft_itoa.c"

int main()
{
	int nb;

	nb = 12345;
	printf("Output string for [%d], is: %s\n", nb, ft_itoa(nb));
	nb = 0;
	printf("Output string for [%d], is: %s\n", nb, ft_itoa(nb));
	nb = -12345;
	printf("Output string for [%d], is: %s\n", nb, ft_itoa(nb));
	//nb = -2147483648LL;
	nb = -2147483648;
	printf("Output string for [%d], is: %s\n", nb, ft_itoa(nb));
}
