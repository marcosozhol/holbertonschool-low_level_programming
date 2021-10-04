#include <stdio.h>
#include <time.h>
/**
*main - lenguages exercises c
*table ascii num 44 = ","
*table ascii num 32 = "espacio"
*Return: 0
*/

int main(void)
{
int num;

for (num = '0'; num <= '9'; num++)
{
putchar(num);
if (num < '9')
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
