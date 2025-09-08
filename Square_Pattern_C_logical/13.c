// 13. Write a program to print the following pattern for n=4
//  2 4 6 8
//  10 12 14 16
//  18 20 22 24
//  26 28 30 32


#include <stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    int temp = 2;
    for(int i=1; i<=n; i++){
        for (int j=1; j<=n; j++)
        {
            printf("%d ", temp);
            temp+=2;
        }
        printf("\n");
    }
    return 0;

   
}