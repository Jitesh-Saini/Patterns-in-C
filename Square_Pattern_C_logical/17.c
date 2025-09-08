//17. Write a program to print the following pattern for n=4
//  A B C D
//  E F G H
//  I J K L
//  M N O P



#include <stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    int a = 1;
    for(int i=1; i<=n; i++){
        for (int j=1; j<=n; j++)
        {
            printf("%c ", a+64);
            a++;
            
        }
        printf("\n");
    }
    return 0;

}