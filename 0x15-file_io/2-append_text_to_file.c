#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *append_text_to_file - agrega caracteres al final
 *@filename: nombre de archivo
 *@text_content: contenido
 *Return: 1 | -1
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{

	int new_file, i;

	if (filename == NULL)
	{
		return (-1);
	}

	for (i = 0; text_content[i] != '\0'; i++)

	new_file = open(filename, O_WRONLY | O_APPEND);
	if (new_file == -1)
	{
		return (-1);
	}

	write(new_file, text_content, i);
	close(new_file);
	return (1);
}
