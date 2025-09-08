#include <stdio.h>
int main()
{

	int n;
	printf("Enter n: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		int a = 1;
		for (int j = 1; j <= i; j++)
		{

			if (i % 2 != 0)
			{
				printf("%d", j);
			}
			else
			{
				printf("%c ", a + 64);// ASCII value of A=65, B=66, C=67...d ko char me convert krdia isko ase bhi kr skte h char ch = (char)d;
				a++;
			}
		}
		printf("\n");
	}
	return 0;
}