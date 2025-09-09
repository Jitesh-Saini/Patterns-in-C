// 3. Write a program to print the following pattern for n=4
//  4
//  3 3
//  2 2 2
//  1 1 1 1


#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);


     int temp = n;
    for(int i=1; i<=n; i++){
       
        for (int j=1; j<=i; j++)
        {
            printf("%d ", temp);
           
        }
         temp--;
        printf("\n");
    }
    return 0;
}