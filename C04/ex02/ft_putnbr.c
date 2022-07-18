#include <unistd.h>

void ft_putchar(char c)
{
    write (1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb == -2147483648)
    {
        ft_putchar('-');
        ft_putchar('2');
        nb = 147483648;
    }
    if (nb < 0)
    {
        ft_putchar('-');
        nb *= -1;
    }
    if (nb < 10)
    {
        ft_putchar(nb + '0');
    }
    else
    {
        ft_putnbr( nb / 10);
        ft_putnbr( nb % 10);
    }
}

int main(void)
{
    ft_putnbr(-2147483648);
    ft_putchar('\n');
    ft_putnbr(-1);
    ft_putchar('\n');
    ft_putnbr(0);
    ft_putchar('\n');
    ft_putnbr(10);
    ft_putchar('\n');
    ft_putnbr(2147483647);
    ft_putchar('\n');
}