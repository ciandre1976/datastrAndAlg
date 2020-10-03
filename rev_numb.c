#include <stdio.h>


int main()
{
	int rem, reverse=0;
	int number;
	scanf_s("%d", &number);
	while (number > 0)
	{
		rem = number % 10;
		reverse = reverse * 10 + rem;
		number = number / 10;
	}
	printf("%d", reverse);

	scanf_s("%d", &number);
}
