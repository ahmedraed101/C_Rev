#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// scanf for and integer & float
// int main(void)
// {
//     int x, y;
//     float fl;
//     printf("Enter an integer: ");
//     scanf("%d %d", &x, &y);
//     printf("You enterd: %d & %d\n", x, y);
//     printf("Enter a float: ");
//     scanf("%f", &fl);
//     printf("You enterd: %.2f\n", fl);
//     return (0);
// }

// scanf string
// int main(void)
// {
//     char str[50];
//     printf("Enter you name: ");
//     scanf("%s", str);
//     printf("Hello, %s\n", str);
//     return (EXIT_SUCCESS);
// }


// time
// int main(void)
// {
//     time_t current_time;
//     current_time = time(NULL);
//     printf("systemTime: %ld\n", current_time);
//     return (EXIT_SUCCESS);
// }

// rand
int main(void)
{
    srand(time(NULL));
    int random_num = rand() % 100;
    printf("%d\n", random_num);
    return (EXIT_SUCCESS);
}