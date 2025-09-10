//31. Write a program to print the following pattern for n = 4.
//  1  2  3  4 
//     5  6  7 
//        8  9 
//          10 


#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int temp = 1;
    for (int i = n; i >= 1; i--)
    {

        for (int j = n; j >= 1; j--)
        {
            if (j <= i)
            {
                printf("%2d ", temp);
                temp++;
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