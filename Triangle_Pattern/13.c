// 13. Write a program to print the following pattern for n=4
// 1 2 3 4
// 5 6 7
// 8 9
// 10


#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
int temp = 1;
    for(int i=n; i>=1; i--){
        
        for (int j=1; j<=i; j++)
        {
            printf("%d ", temp);
            temp++;
        }
        printf("\n");
    }
    return 0;
}