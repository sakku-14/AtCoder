#include <stdio.h>
#include <string.h>

int main ()
{
	char buf[256];
	char *s_in[2];
	char letters[8];
	char words[40320][8];

	//標準入力から空白区切りで別々の文字列へ格納
	fgets(buf, 256, stdin);
	s_in[0] = strtok(buf, " ");
	s_in[1] = strtok(NULL, "\n");

	

	return (0);
}
