#include <stdio.h>
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return(1);
	else 
		return(0);
}

int main(void)
{
	int	a;

	a = '5';
	printf("%d, \n", ft_isalpha(a));
	a = 'g';
	printf("%d, \n", ft_isalpha(a));
	a = 'D';
	printf("%d, \n", ft_isalpha(a));
}
