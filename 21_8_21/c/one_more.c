#include <stdio.h>

int main ()
{
	char buf[256];
	char *s_in[2];

	fgets(buf, 256, stdin);
	s_in = strtok(buf, " ");

	printf();

	return (0);
}
