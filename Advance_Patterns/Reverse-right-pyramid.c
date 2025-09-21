// Reverse right pyramid pattern
// Input: 5
// Output:
// * * * * *
// * * * *
// * * *
// * *
// *


#include <stdio.h>

int main()
{
	int n;
	printf("enter no : ");
	scanf("%d",&n);

	for(int i=n; i>=1; i--) {

		for (int j = 1; j<=i; j++) {
			printf("* ");
		}

		printf("\n");

	}

	return 0;
}