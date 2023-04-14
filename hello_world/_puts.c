#include <stdio.h>

int main(void)
{
	char *message = "In The Name of ALLAH.";
	puts(message);
	fputs("this message ends with \\n.\n", stdout);
	return (0);
}
