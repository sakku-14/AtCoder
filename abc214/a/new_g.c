#include <stdio.h>
#include <stdlib.h>

int main()
{
	char buf[256];
	int index;

	fgets(buf, 256, stdin);

	index = atoi(buf);

	if (index >= 1 && index <= 125)
		printf("4\n");
	else if (index <= 211)
		printf("6\n");
	else
		printf("8\n");
	return (0);
}
