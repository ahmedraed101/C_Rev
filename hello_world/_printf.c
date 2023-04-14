#include <stdio.h>

int main(void)
{
	int x = 43, a = 34, b = 5, c = a + b;
	double pi = 3.141592265359;
	printf("In The Name Of ALLAH.\n");
	printf("the value of x: %d\n", x);
	printf("the value of pi is approximately %.2f and it's size is: %zu bytes\n", pi, sizeof(pi));
	printf("%d + %d = %d\n", a, b, c);
}
