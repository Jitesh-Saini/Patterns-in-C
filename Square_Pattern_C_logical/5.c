// 5. Write a program to print the following pattern for n=4
//  1357
//  1357
//  1357
//  1357


#include <stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        int a = 1;
        for (int j=1; j<=n; j++)
        {
            printf("%d", a);
            a +=2;

        }
        printf("\n");
    }
    return 0;

}