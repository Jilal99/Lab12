#include <stdio.h>

void sort_numeric(int n, double* arr, char x)
{
    int i,j;
    double k;
    if (x == 'a' || x == 'A')
    {
        for (i = 0; i < n; i++)
        {
	    for (j = i + 1; j < n; j++)
	    {
		if (*(arr + j) < *(arr + i))
		{
		    k = (double)*(arr + i);
		    *(arr + i) = *(arr + j);
		    *(arr + j) = k;
		}
	    }
	}
	printf ("array is:\n");
	for (i = 0; i < n; i++)
	{
	    printf("%f\n ", *(arr + i));
	}

    }
    else if(x == 'd' || x == 'D')
    {
	for (i = 0; i < n; i++)
	{
	    for (j = i +1; j < n; j++)
	    {
		if (*(arr + j) > *(arr + i)) 
		{
		    k = (double)*(arr + i);
		    *(arr + i) = *(arr + j);
		    *(arr + j) = k;
		}
	    }
	}
	printf("Array is:\n");
	for (i = 0; i < n; i++)
	{
	    printf("%f\n ", *(arr + i));
	}
    }
    else
    {
	printf("Invalid entry\n");
    }
}

int main()
{
    int n = 11;
    int i;
    char x;
    double arr[] = {10, 0.25, -2342, 12123, 3.145435, 6, 6, 5.999, -2, -5, -109.56};
    printf("Sorting\n");
    printf("Enter a or A for ascending order\nPress d or D for descending order\nEnter value: ");
    scanf("%c", &x);
    sort_numeric(n, arr, x);
    return 0;
}
