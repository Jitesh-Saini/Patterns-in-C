// 11. Write a program to print the following pattern for n=4
//  1 3 5 7
//  9 11 13 15
//  17 19 21 23
//  25 27 29 31


#include <stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    int temp = 1;
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
