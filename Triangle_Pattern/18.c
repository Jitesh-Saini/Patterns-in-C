// 18. Write a program to print the following pattern for n=4
//  20 18 16 14
//  12 10 8
//  6 4
//  2


#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
int temp = n*n+n;
    for(int i=n; i>=1; i--){
        
        for (int j=1; j<=i; j++)
        {
            printf("%d ", temp);
            temp-=2;
        }
        
        printf("\n");
    }
    return 0;
}