//19. Write a program to print the following pattern for n = 4.
//        1
//      2 1
//    3 2 1
//  4 3 2 1





#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

  

    for (int i = 1; i <= n; i++)
    {
        int temp = i;
        for (int j = n; j >=1; j--)
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