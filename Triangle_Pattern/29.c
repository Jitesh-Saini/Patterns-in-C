//29. Write a program to print the following pattern for n = 4.
// 1  1  1  1
//    2  2  2
//       3  3
//          4



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
            }
            else
            {
                printf("   ");
            }
        }
        temp++;
        printf("\n");
    }
    return 0;
}