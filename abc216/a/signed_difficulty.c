#include <stdio.h>

int main()
{
	int x, y;

	scanf("%d.%d", &x, &y);
	if (y <= 2)
		printf("%d-\n", x);
	else if (y <= 6)
		printf("%d\n", x);
	else
		printf("%d+\n", x);
}
