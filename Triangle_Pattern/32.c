//32. Write a program to print the following pattern for n = 4.
// 10  9  8  7 
//     6  5  4 
//        3  2 
//           1 


#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int temp = 2 * n + 2;
    for (int i = n; i >= 1; i--)
    {

        for (int j = n; j >= 1; j--)
        {
            if (j <= i)
            {
                printf("%2d ", temp);
                temp--;
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