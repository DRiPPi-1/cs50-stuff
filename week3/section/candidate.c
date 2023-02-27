#include <cs50.h>
#include <stdio.h>

typedef struct
{
    string name;
    int votes;
}
candidate;

candidate get_candidates(string prompt);

int main(void)
{
    candidate candidates_array[3];
    for (int i = 0; i < 3; i++)
    {
        candidates_array[i] = get_candidates("Enter a candidate: ");
    }
}

candidate get_candidates(string prompt)
{
    printf("%s\n", prompt);

    candidate c;
    c.name = get_string("Enter a name: ");
    c.votes = get_int("Enter a number of votes: ");
    return c;
}