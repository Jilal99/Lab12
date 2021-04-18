#include <stdio.h>
#include <string.h>

void sort_alphabet(char *arr[], char input);

int main()
{
    char *arr[8] = { "Systems", "Programming", "Deep", "Learning", "Internet", "Things", "Robotics", "Course" };
    int i;
    char input;

    printf("Array is: \n");
    for (i = 0; i < 8; i++)
    {
	printf("%s ", arr[i]);
    }

    printf("\nEnter A or a for alphabetical order, D or d for reverse alphabetical order: ");
    scanf("%c",&input);

    sort_alphabet(arr,input);
    printf("\nArray after sort: \n");
    for(i = 0; i < 8; i++)
    {
        printf("%s ",arr[i]);
    }
    return 0;
}

void sort_alphabet(char *arr[], char input)
{
    int i,j,k;

    if(input == 'A'||input == 'a')
    {
	for (i = 0; i < 7; i++)
	{
	    for (j = i+1; j < 8; j++)
	    {
		if (strcasecmp(arr[i], arr[j]) > 0)
		{
		    char *k = arr[i];
		    arr[i] = arr[j];
		    arr[j] = k;
		}
	    }
	}
    }
    else if(input == 'D'||input == 'd')
    {
        for(i = 0; i < 7; i++)
	{
	    for(j = i + 1; j < 8; j++)
	    {
		if(strcasecmp(arr[i], arr[j]) < 0)
		{
		    char *k = arr[i];
		    arr[i] = arr[j];
		    arr[j] = k;
		}
	    }
	}

    }
    else {
        printf("\nwrong Input");
    }
}
