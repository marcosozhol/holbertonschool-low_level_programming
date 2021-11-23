#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
*create_file - crea un archivo nuevo y solicitudes en casos
*@filename: nombre del archivo
*@text_content: contenido del archivo
*Return: 1 en caso de exito | -1 falla
*
*/
int create_file(const char *filename, char *text_content)
{
	int new_file, i = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	new_file = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
		if (new_file == -1)
		{
			return (-1);
		}

	while (text_content[i])
	{
		i++;
	}

	if (text_content == NULL)
	{
		/*close(new_file);*/
		return (-1);
	}

	else
	{
		write(new_file, text_content, i);
	}

	close(new_file);
	return (1);
}
