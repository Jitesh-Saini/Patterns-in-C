// 10. Write a program to print the following pattern for n=4
//  16 15 14 13
//  12 11 10 9
//  8 7 6 5
//  4 3 2 1

#include <stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int temp = n*n;
    for(int i=1; i<=n; i++){
        for (int j=1; j<=n; j++)
        {
            printf("%d ", temp);
            temp--;
        }
        printf("\n");
    }
    return 0;

}
