#include <stdio.h>

int main()
{
    int decimal, binary=0, new, i=1;

    printf("Enter decimal number: ");
    scanf("%d", &decimal);

    while(decimal != 0)
    {
        new = decimal % 2;
        binary += (new*i);
        decimal /= 2;
        i *= 10;
    }

    printf("Binary is %d\n", binary);
    return 0;
}
