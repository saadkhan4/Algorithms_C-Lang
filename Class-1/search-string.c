#include <cs50.h>
#include <stdio.h>
#include <string.h>

/// this we are using string(a bunch of words) ///
int main(void)
{
    string objects[] = {"battleship", "boot", "cannon", "iron", "thimble", "top hat"};

    string s = get_string("Objects: ");
    for (int i = 0; i < 6; i++)
    {
        if (strcmp(objects[i], s) == 0)             
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}