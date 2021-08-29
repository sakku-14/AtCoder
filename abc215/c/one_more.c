#include <stdio.h>
#include <string.h>

void init_arrays(char words[40320][8], int row, int col)
{
	for(int i = 0; i < row; i++)
	{
		bzero(words[i], col);
	}
}

/*
void dfs(char *s, char *cs)
{
	for (int i = 0; i < strlen(cs); i++)
	{
	}
}
*/

int main ()
{
	char buf[256];
	char *s_in[2];
	//char letters[8][1];
	char words[40320][8];

	init_arrays(words, 40320, 8);
	//標準入力から空白区切りで別々の文字列へ格納
	fgets(buf, 256, stdin);
	s_in[0] = strtok(buf, " ");//文字列
	s_in[1] = strtok(NULL, "\n");//何番目

	//深さ優先探査による全探査
	//dfs("", s_in[0]);

	return (0);
}
