#include "../struct.h"

char **pipe_splitter(char *str, t_main *main)
{
	int i = 0;
    char	**matrix;

    matrix = ft_split(str, 124);
	while (matrix[i])
	{
		printf("token attuale[%d]: %s\n", i, matrix[i]);
		i++;
		printf("next token[%d]: %s\n", i, matrix[i]);
	}
	main->pipe_number = i;
    return (matrix);
}
