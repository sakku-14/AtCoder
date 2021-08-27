#include <stdio.h>
#include <string.h>

int main()
{
	char buf[256];

	fgets(buf, 256, stdin);

	if (strcmp(buf, "Hello,World!\n") == 0)
		printf("AC");
	else
		printf("WA");
	return (0);
}
