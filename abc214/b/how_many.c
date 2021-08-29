#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int add_t, by_t;

	scanf("%d %d", &add_t, &by_t);

	int cnt = 0;

	for (int a = 0; a <= add_t; a++)
	{
		for (int b = 0; a + b <= add_t; b++)
		{
			for (int c = 0; a + b + c <= add_t; c++)
			{
				if (a * b * c <= by_t)
					cnt++;
			}
		}
	}
	printf("%d\n", cnt);

	return (0);
}
