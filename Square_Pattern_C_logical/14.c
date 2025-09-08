// 14. Write a program to print the following pattern for n=4
//  32 30 28 26
//  24 22 20 18
//  16 14 12 10
//  8 6 4 2


#include <stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    int temp = 2*(n*n);
    for(int i=1; i<=n; i++){
        for (int j=1; j<=n; j++)
        {
            printf("%d ", temp);
            temp-=2;
        }
        printf("\n");
    }
    return 0;

   
}