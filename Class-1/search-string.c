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
        if (strcmp(objects[i], s) == 0)         ////strcmp(objects[i], s): This function compares two strings (objects[i] and s).
                                                // • It returns 0 if the strings are exactly the same.
	                                            // • == 0 : The if condition checks if the result of strcmp is 0, meaning objects[i] and s are equal.
            {
                printf("Found\n");
                return 0;
            }
    }
    printf("Not found\n");
    return 1;
}


