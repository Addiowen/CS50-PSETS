#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string name = get_string("what is your name: ");// requesting for user input
    printf("hello, %s\n", name);// printing hello with the user input
}