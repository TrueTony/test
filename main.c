#include "printf.h"
#include <limits.h>

int		main(void)
{
	int cow = 0;
	int cow2 = 0;

	printf("\n");


	//cow = printf("% 5.6f\n", 7.3);
	//cow = printf("%lld", -9223372036854775808);
	//cow = printf("%lu", -42);
	cow = printf("this %i number", -267);

	printf("\n");

	//cow2 = ft_printf("% 5.6f\n", 7.3);
	//cow2 = ft_printf("%lld", -9223372036854775808);
	cow2 = ft_printf("this %i number", -267);

	// cow2 = printf("%f\n", 123456789123456789123456789.1);
	// cow2 = ft_printf("%f\n", 123456789123456789123456789.1);

	printf("\ncow :%d\ncow2:%d\n", cow, cow2);

	return (0);
}
//anton_hiiii_it's_sonya