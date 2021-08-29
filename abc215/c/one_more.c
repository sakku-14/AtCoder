#include <stdio.h>
#include <string.h>

int check_word(char *word, int len)
{
	int i = 0;
	while (i < len)
	{
		if (word[i] == '\0')
			i++;
		else
			return (-1);
	}
	return (0);
}

void dfs(char *cont, char *word, int rest, int len)
{
	if (check_word(word, len) == 0)
	{
		printf("%s\n", cont);
		return (0);
	}
	for(int i = 0; i < len; i++)
	{
		//全探索
	}
}

int main()
{
	char word[8];
	int index;

	scanf("%s %d", word, &index);
	qsort(word, strlen(word), 1, strcmp);

	dfs("", word, strlen(word), strlen(word));

	return(0);
}
