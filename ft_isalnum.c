#include <stdio.h>

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
		return(1);
	if (c >= 'A' && c <= 'Z')
		return(1);
	if (c >= 'a' && c <= 'z')
		return(1);
	else
		return(0);
}
int main(void)
{
	int	a;

	a = ';';
	printf("%d, \n", ft_isalnum(a));
	a = '4';
	printf("%d, \n", ft_isalnum(a));
	a = 'L';
	printf("%d, \n", ft_isalnum(a));
}
