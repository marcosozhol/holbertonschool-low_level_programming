#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 *main - funcion que copia contenido de un archivo a otro
 *@argc: cantidad de argumentos(archivos)
 *@argv: lugar de archivos
 *Return: 0 & -1 en caso de errores
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, rd, wr1;
	char *buf[1024];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file 3-cp\n");
		exit(98);
	}
	file_from = open(argv[1], O_RDONLY, 0644);
		if (file_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file_to\n");
			exit(99);
		}
	rd = read(file_from, buf, 1024);
		if (rd == -1)
		{
			return (-1);
		}

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0644);
		if (file_to == -1)
		{
			return (-1);
		}

	wr1 = write(file_to, buf, 1024);
		if (wr1 == -1)
		{
			return (-1);
		}
	closefun(file_from);
	closefun(file_to);
return (0);
}
/**
 *closefun - funcion para cerrar los open de arriba
 *@arch: archivos
 */
void closefun(int arch)
{

	close(arch);
		if (close(arch) == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't close fd -1\n");
			exit(100);
		}
}
