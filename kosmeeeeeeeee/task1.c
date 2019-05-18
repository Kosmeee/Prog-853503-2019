#include <stdio.h>

bool isLucky(long long int num)
{
	while (num)
	{
		if (num % 10 == 4 || num % 10 == 7)
			return 1;
		num /= 10;
	}
	return 0;
}

int main()
{
	int k = 0;
 long long int num;
	scanf_s("%lli", &num);
	for (long long int i = 1; i <= num; i++)
	{
		if (num % i == 0 && isLucky(i) == 1)
		{
			k++;
			printf_s("%lli\n", i);
		}

	}
	printf_s("ammount of dividers %d", k);

}
