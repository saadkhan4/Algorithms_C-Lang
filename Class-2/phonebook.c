#include <stdio.h>
#include <cs50.h>
#include <string.h>

// int main(void)
// {
//     string names[] = {"Thomas", "Charlotte", "Blake"};
//     string numbers[] = {"0345-6153807", "0319-3346494", "0319-6744555"};

//     string name = get_string("Name: ");
//     for (int i = 0; i < 3; i++)
//     {
//         if (strcmp(names[i], name) == 0)
//         {
//             printf("found %s\n" , numbers[i]);     // we are using placeholder this time because we aren't just printing number but we're printing names as well//
//             return 0;
//         }
//     }
//     printf("not found\n");
//     return 1;
// }



int main(void)
{
    string names[] = {"Thomas", "Charlotte", "Blake"};
    string numbers[] = {"0345-6153807", "0319-3346494", "0319-6744555"};

    string name = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(names[i], name) == 0)
        {
            printf("found %s\n" , numbers[i]);
            return 0;
        }
    }
    printf("not found\n");
    return 1;
}