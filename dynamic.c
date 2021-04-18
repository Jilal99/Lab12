#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *a,n,i,j,k;
    printf("\nEnter the number of values: ");
    scanf("%d",&n);
    a = (int *)malloc(n *sizeof(int));
    printf("\nEnter the values: ");
    for (i = 0; i <= n-1; i++)
    {
        scanf("%d", (a+i));
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
	{
	    if(*(a+i)<*(a+j))
            {
                k = *(a+i);
	        *(a+i) = *(a+j);
 	        *(a+j) = k;
 	    }
	 }
    }
    printf("\nAscending order: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", *(a+i));
    }
    printf("\nDescending order: ");
    for(i = n-1; i >= 0; i--)
    {
        printf("%d ", *(a+i));
    }
    free (a);
    return 0;
    	
}
