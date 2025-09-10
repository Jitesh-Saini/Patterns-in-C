//28. Write a program to print the following pattern for n = 4.
//  4  3  2  1 
//     3  2  1 
//        2  1 
//           1 




#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for (int i = n; i >=1; i--)
    {
        int temp = n;
        for (int j = n; j >=1; j--)
        { 
            if (j <= i)
            {
                printf("%2d ", temp);
          
            }
            else
            {
                printf("   ");
            }
               temp--;
        }

        printf("\n");
    }
    return 0;
}