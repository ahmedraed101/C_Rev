#include <stdio.h>

int main(void)
{
    int age = 17;
    int admin = 1;
    if (age >= 18 && admin == 1)
    {
        printf("the Admin is here, show some respect.\n");
    } else if (age >= 20 && admin != 1)
    {
        printf("Wellcome to the Club.\n");
    } else if (admin == 1 && (18 - age) == 1)
    {
        printf("Wellcome Admin Kid your time to create Club will come soon.\n");
    } else
    {
        printf("sorry you are too young for this club.\n");
    }
    return (0);
}