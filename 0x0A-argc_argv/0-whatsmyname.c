#include <stdio.h>
#include <stdlib.h>
/**
 * main - function
 * @argc: offset count
 * @argv: offset value
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n",argv[0]);
	return (0);
}
