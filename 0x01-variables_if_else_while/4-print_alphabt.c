#include <stdio.h>
#include <time.h>
/**
*main - lenguages exercises c
*Return: 0
*/

int main(void)
{
int abc;
for (abc = 'a'; abc <= 'z'; abc++)
if (abc != 'e' && abc != 'q')
putchar (abc);
putchar ('\n');
return (0);
}
