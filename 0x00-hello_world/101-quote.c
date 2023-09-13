#include <stdio.h>
/**
 * main- A c program that prints exactly:
 * and that piece of art is useful" - Dora Korpar, 2015-10-19,
 * Description: the program will not use printf or puts function"
 * Return: Returns 1
 */
int main(void)
{
	char *s = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	long l = 59;
	long fd = 1;
	long syscall = 1;
	long ret = 0;

	__asm__ ("syscall"
	: "=a" (ret)
	: "a" (syscall),
	"D" (fd),
	"S" (s),
	"d" (l));
	return (1);
}
