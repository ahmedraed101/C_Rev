#include <stdio.h>

int main(void)
{
    int i = 1230;
    printf("i = %d\n\t>>i + 100\n", i);
    i += 100;
    printf("i = %d\n\t>>i - 130\n", i);
    i -= 130;
    printf("i = %d\n\t>>i * 10\n", i);
    i *= 10;
    printf("i = %d\n\t>>i / 100\n", i);
    i /= 100;
    printf("i = %d\n\t>>i %% 100\n", i);
    printf("i = %d\n", i % 100);
    return (0);
}