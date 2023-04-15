#include <stdio.h>

int main(void)
{
    int x = 34;
    int y = 14;
    int x_min = -x;
    unsigned int u_i = 34;
    unsigned int u_j = 14;
    printf("signed : %d - %d = %d\n", y, x, y - x);
    printf("unsigned : %u - %u = %u\n", u_j, u_i, u_j - u_i);
    printf("what happend that unsigned int can store 4,294,967,295\n");
    printf("and it doesn't have negative values like int that stores 2,147,483,648 or -2,147,483,648\n");
    printf("so when you subtract bigger value from smaller value in unsigned int it just goes around and subtract the remaining number from 4,294,967,295\n");
    return (0);
}