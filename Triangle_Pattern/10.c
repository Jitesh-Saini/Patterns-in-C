// 10. Write a program to print the following pattern for n=4
//  1 2 3 4
//  1 2 3
//  1 2
//  1


// #include <stdio.h>
// int main(){
//     int n;
//     printf("Enter a number: ");
//     scanf("%d",&n);

//     for(int i=n; i>=1; i--){
//         for (int j=1; j<=i; j++)
//         {
//             printf("%d ", j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//another way


#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);

 
    for(int i=n; i>=1; i--){
       int temp = 1;
        for (int j=1; j<=i; j++)
        {
            printf("%d ", temp);
         temp++;
        }
           
        printf("\n");
    }
    return 0;
}