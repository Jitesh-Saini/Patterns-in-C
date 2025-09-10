//25. Write a program to print the following pattern for n = 4.
//          19 
//       17 15
//    13 11  9
//  7  5  3  1


#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int temp = n*n+n-1;

    for (int i = 1; i <= n; i++)
    {

        for (int j = n; j >= 1; j--)
        {
            if (j <= i)
            {
                printf("%2d ", temp);
                temp-=2;
            }
            else
            {
                printf("   ");
            }
        }

        printf("\n");
    }
    return 0;
}
