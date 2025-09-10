// 35. Write a program to print the following pattern for n = 4.
//   2  4  6  8
//     10 12 14
//        16 18
//           20



#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int temp = 2;
    for (int i = n; i >= 1; i--)
    {

        for (int j = n; j >= 1; j--)
        {
            if (j <= i)
            {
                printf("%2d ", temp);
                temp += 2;
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