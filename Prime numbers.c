
#include <stdio.h>
#include <math.h>
int main()
{
    int n, i, j, count;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Prime numbers from 1 to %d are: \n", n);
    // using for loop
    for (i = 2; i <= n; i++)
    {
        count = 1; 
        for (j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                count = 0; 
                break;
            }
        }
        if (count == 1) 
        {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}
