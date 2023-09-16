#include <unistd.h>

void charyaz(char c)
{
    write(1, &c, 1);
}
void yaznumber(int n)
{
    if (n > 9)
    {
        yaznumber(n / 10);
        yaznumber(n % 10);      
    }
    else
    {
        charyaz(n + 48);
    }
}
int main()
{
    int x;

    x = 1;
    while(x <= 100)
    {
        if (x % 15 == 0)
        {
            write(1, "fizzbuzz\n", 9);
        }
        else if (x % 3 == 0)
        {
            write(1, "fizz\n", 5);
        }
        else if (x % 5 == 0)
        {
            write(1, "buzz\n", 5);
        }
        else
        {
            yaznumber(x);
            write(1, "\n", 1);
        }
        x++;
    }
}
