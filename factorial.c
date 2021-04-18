#include <stdio.h>

int fact(int n)
{
    if (n == 0)
        return 1;
    return n * fact(n - 1);
}

int main()
{
    int number = 15;
    printf("Factorial of %d is %d", number, fact(number));
    return 0;
}
