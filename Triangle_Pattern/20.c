// C program to print the following pattern for n=4
//        1
//      2 2
//    3 3 3
//  4 4 4 4


// #include <stdio.h>
// int main() {
// 	int n;
// 	printf("Enter a number: ");
// 	scanf("%d",&n);
	
// 	int temp =1;
	
// 	for(int i=1; i<=n; i++) {

// 		for(int k = 0; k<2*(n-i); k++) {
// 			printf(" ");
// 		}//this part is for spaces


// 		for (int j=1; j<=i; j++)
// 		{
// 			printf("%d ", temp);

// 		}
// 		temp++;
// 		printf("\n");
// 	}
// 	return 0;
// }



//another way

// #include <stdio.h>
// int main() {
// 	int n;
// 	printf("Enter a number: ");
// 	scanf("%d",&n);
	
// 	int temp =1;
	
// 	for(int i=1; i<=n; i++) {

		
// 		for (int j=n; j>=1; j--)
// 		{if (j<=i)
// 		{
// 			printf("%d ", temp);

// 		}
// 		else{
// 			printf("  ");
// 		}
		
			
// 		}
// 		temp++;
// 		printf("\n");
// 	}
// 	return 0;
// }



//another way






#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

  
 int temp = 1;
    for (int i = 1; i <= n; i++)
    {
       
        for (int j = n; j >=1; j--)
        { 
            if (j <= i)
            {
                printf("%2d ", temp);
          
            }
            else
            {
                printf("   ");
            }
            
              
        } temp++;

        printf("\n");
    }
    return 0;
}