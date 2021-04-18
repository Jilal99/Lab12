#include <stdio.h>

int main()
{
    int original_integer = 20;

    printf("Original integer is %d\n", original_integer);
    
    int new_integer = ((original_integer) << 3) + (~original_integer);

    printf("New integer is %d\n", new_integer);
}
