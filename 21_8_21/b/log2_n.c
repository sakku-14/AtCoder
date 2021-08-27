#include <stdio.h>
#include <stdlib.h>

int main()
{
	char buf[256];
	long long max;
	long long tmp = 1;
	int k = 0;

	fgets(buf, 256, stdin);
	max = atoll(buf);
	while (tmp <= max)
	{
		k++;
		tmp *= 2;
	}
	if (k != 0)
		k--;
	printf("%d\n", k);

	return (0);
}
