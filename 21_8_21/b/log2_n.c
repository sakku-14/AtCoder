#include <stdio.h>
#include <stdlib.h>

int main()
{
	char buf[256];
	int max;
	int tmp = 1;
	int k = 0;

	fgets(buf, 256, stdin);
	max = atoi(buf);
	while (tmp <= max)
	{
		k++;
		tmp *= 2;
	}
	printf("%d\n", k);

	return (0);
}
