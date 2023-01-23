#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        //prompt user for height
        n = get_int("Height: ");
    }
    while (n < 1 || n > 8);

    //for rows
    for (int i = 0; i < n; i++)
    {
        //to align pyramid on the right
        for (int e = n - 1; e > i; e--)
        {
            printf(" ");
        }
        //for columns
        for (int j = -1; j < i; j++)
        {
            printf("#");

        }
        printf("\n");
    }
}
