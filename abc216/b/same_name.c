#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int num;
	char **f_name, **l_name;
	int i = 0, j = 0;

	scanf("%d", &num);
	if (!(f_name = malloc(sizeof(char) * (num + 1))))
		return (-1);
	if (!(l_name = malloc(sizeof(char) * (num + 1))))
		return (-1);
	while (i < num)
	{
		if (!(f_name[i] = malloc(sizeof(char) * 11)))
			return (-1);
		if (!(l_name[i] = malloc(sizeof(char) * 11)))
			return (-1);
		i++;
	}
	i = 0;
	while (i < num)
	{
		scanf("%s %s", f_name[i], l_name[i]);
		i++;
	}
	i = 0;
	while (i < num && strcmp(f_name[i], f_name[j]) == 0)
	{
		j = 0;
		if (i != j)
		{
			while (j < num && i != j)
			{
				if (i != j)
				{
					if (strcmp(f_name[i], f_name[j]) == 0)
					{
						printf("Yes\n");
						return (0);
					}
				}
				j++;
			}
		}
		i++;
	}
	printf("No\n");
	return (0);
}
