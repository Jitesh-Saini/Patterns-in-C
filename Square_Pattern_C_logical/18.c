//18. Write a program to print the following pattern for n=4
//  P O N M
//  L K J I
//  H G F E
//  D C B A


#include <stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    
    int a = n*n;
    for(int i=1; i<=n; i++){
        for (int j=1; j<=n; j++)
        {
            printf("%c ", a+64);
            a--;
            
        }
        printf("\n");
    }
    return 0;

}
