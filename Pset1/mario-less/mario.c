#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height; //declare int variable height
    do
    {
        height = get_int("height: ");
    }
    while (height < 1 || height > 8); // height should not be less than 1 or greater than 8.
    for (int row = 0; row < height; row++) //print new line as row.
    {
        for (int space = height - row - 1; space > 0; space--) // to print space
        {
            printf(" ");
        }
        for (int hash = 0; hash < row + 1; hash++) //to print hashes(#)
        {
            printf("#");
        }
        printf("\n");
    }

}