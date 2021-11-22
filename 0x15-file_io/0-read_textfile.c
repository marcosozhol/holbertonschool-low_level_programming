#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
/**
 *
 *
 *
 *
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd; /*valor entero que va a devolver la funcion*/
	int wr;
	char *buf;
	ssize_t rd; /*donde se almacenara la informacion para abrir*/

	fd = open(filename, O_RDONLY);

	if (fd == -1) /*si no se puede abrir el archivo*/
	{
		return (0);
	}

	buf = malloc(sizeof(char) * letters);
		if (buf == NULL) /*en caso de no tener contenido*/
			return (0);

	if (filename == NULL) /*si el nombre es NULL*/
	{
		return (0);
	}

	rd = read(fd, buf, letters);
	if (rd == -1)
	{
		return (0);
	}

	wr = write(1, buf, rd);
		if (wr == -1)
		{
			return (0);
		}

	close(fd);
	free(buf);

return (wr);
}
