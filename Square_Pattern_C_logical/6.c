// 6. Write a program to print the following pattern for n=4
//  7531
//  7531
//  7531
//  7531


#include <stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        int temp = 2*n-1;
        for (int j=1; j<=n; j++)
        {
            printf("%d", temp);
            temp -= 2;

        }
        printf("\n");
    }
    return 0;

}