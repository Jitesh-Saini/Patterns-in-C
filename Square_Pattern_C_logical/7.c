// 7. Write a program to print the following pattern for n=4
//  2468
//  2468
//  2468
//  2468


#include <stdio.h>
int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

    for(int i=1; i<=n; i++){
        int temp = 2;
        for (int j=1; j<=n; j++)
        {
            printf("%d", temp);
            temp += 2;

        }
        printf("\n");
    }
    return 0;

}
