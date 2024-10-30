#include <stdio.h>
#include <cs50.h>

void draw(int n);

int main(void)
{
    int height = get_int("Height: ");
    draw(height);
    
}
void draw(int n)
{
    // if nothing to say
   if (n <= 0)    // just make sure it never goes negative
   {
       return;
   }

    //print pyramid of height n - 1
    draw(n - 1);

    //print one more row
    for (int i = 0; i < n; i++)
    {
        printf("#");
    }
    printf("\n");
}