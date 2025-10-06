#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number;
    int *ptr;
    int i;
    printf("How many ints would you like store? ");
    scanf("%d", &number);
    ptr = (int *)malloc(number * sizeof(int));
    if (ptr == NULL)
    {
        printf("Error! memory not allocated.");
        return 1;
    }
    else
    {
        for (i = 0; i < number; ++i)
        {
            *(ptr + i) = i;
        }
        for (i = number; i > 0; i--)
        {
            printf("%d\n", *(ptr + i - 1));
        }
        free(ptr);
    }
    return 0;
}