#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int height = get_int("Height: ");

    if (1 > height || height > 8) {
        return 1;
    }

    for (int i = 1; i <= height; i ++)
    {
        for (int j = height - 1; j >= i; j--)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("#");
        }
        printf("\n");
    }

}