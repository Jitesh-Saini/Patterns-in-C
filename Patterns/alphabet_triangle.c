#include <stdio.h>
int main()
{

    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    { // no. of rows = i
        int a = 1;
        for (int j = 1; j <= n; j++)
        { // no. of columns = j
            int d = a + 64;
            char ch = d; // ASCII value of A=65, B=66, C=67...  d ko char me convert krdia isko ase bhi kr skte h char ch = (char)d;
            printf("%c ", ch);
            a++;
        }
        printf("\n");
    }
    return 0;
}