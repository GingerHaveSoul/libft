#include <stdio.h>

int ft_isascii(int c)
{
    if (c >= 0 && c <= 127)
        return(1);
    else
        return(0);

}
int main(void)
{
    int a;

    a = 133;
    printf("%d, \n", ft_isascii(a));
    a = 'L';
    printf("%d, \n", ft_isascii(a));
    a = 144;
    printf("%d, \n", ft_isascii(a));
}