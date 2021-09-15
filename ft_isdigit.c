#include <stdio.h>

int	ft_isdigit(int c)
{
	if ( c >= '0' && c <= '9')
		return(1);
	else
		return(0);
}
int main(void)
{
	int	a;

	a = 'g';
	printf("%d,\n", ft_isdigit(a));
	a = '4';
	printf("%d,\n", ft_isdigit(a));
	a = 'L';
	printf("%d,\n", ft_isdigit(a));
}
