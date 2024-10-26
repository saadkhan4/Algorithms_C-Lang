#include <cs50.h>
#include <stdio.h>

//// correct implementation of linear search////
/// from left to right, looking for a number that may or may not be there.///

int main(void)              
{
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    int n = get_int("Number: ");
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == n)
        {
            printf("found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}

int main(void)
{
    int numbers[] = {20, 500, 10, 5, 100, 1, 50};

    int n = get_int("Number: ");
    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == n)
        {
            printf("found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}