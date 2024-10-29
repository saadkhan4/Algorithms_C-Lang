#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct 
{
    string name;
    string number;
}
 person;

int main(void)
{
    person people[3];

    people[0].name = "Ali";
    people[0].number = "0344-5667776";

    people[1].name = "Sara";
    people[1].number = "0344-34334776";

    people[2].name = "Natasha";
    people[2].number = "0344-87878783";

    string name = get_string("Name: ");
    for (int i = 0; i < 3; i++)
    {
        if (strcmp(people[i].name, name) == 0)
        {
            printf("found %s\n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}