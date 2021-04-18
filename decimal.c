#include <stdio.h>
#include <math.h>

int main()
{
    int binary, decimal=0, new, i=0;

    printf("Enter the binary number: ");
    scanf("%d", &binary);

    while (binary != 0)
    {
        new = binary % 10;
        decimal += (new * pow(2,i));
        binary /= 10;
        i++;
    }

    printf("Decimal = %d ", decimal);
    return 0;
}
