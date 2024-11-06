#include <cs50.h>
#include <stdio.h>

void draw(int n);

// int main(void)
// {
//     int height = get_int("Height: ");
//     draw(height);
// }

// void draw(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < i + 1; j++)   //we just have need to one hash one and after && after thats why we add + 1 //
//         {
//             printf("#");
//         }

//         printf("\n");
//     }

// }


int main(void)
{
    int height = get_int("Height: ");
    draw(height);
}

void draw(int n)
{
    for (int e = 0; e < n; e++)
    {
        for (int p = 0; p < e + 1; p++)   
        {
            printf("$");
        }
        printf("\n");
    }
}