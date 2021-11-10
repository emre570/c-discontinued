#include <stdio.h>

int main(void)
{
	int a,b;

	printf("sayi1:");
	scanf("%i", &a);

	printf("sayi2:");
	scanf("%i", &b);

	if(a == b)
	{
		printf("%d", 3*a);
	}
	else
	{
		printf("%i", a + b);
	}
}

