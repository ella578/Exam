#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putnbr(int n)
{
    if (n > 9)
    {
        ft_putnbr(n / 10);
        ft_putnbf(n % 10);      
    }
    else
    {
        ft_putchar(n + 48);
    }
}
int main()
{
    int i;

    i = 1;
    while(i <= 100)
    {
        if (i % 15 == 0)
        {
            write(1, "fizzbuzz\n", 9);
        }
        else if (i % 3 == 0)
        {
            write(1, "fizz\n", 5);
        }
        else if (i % 5 == 0)
        {
            write(1, "buzz\n", 5);
        }
        else
        {
            ft_putnbr(i);
            write(1, "\n", 1);
        }
        i++;
    }
    return(0);
}
