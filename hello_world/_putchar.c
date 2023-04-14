#include <stdio.h>

void putchar_int(int n);

int main(void)
{
	int a = 65;
	putchar(a);
	putchar('\n');
	putchar('a');
	putchar('\n');
	putchar_int(2198234);
	putchar('\n');
	putchar_int(-124134);
	putchar('\n');
	return (0);
}

void putchar_int(int n)
{
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n > 9)
	{
		putchar_int(n / 10);
	}
	putchar(n % 10 + '0');
}
