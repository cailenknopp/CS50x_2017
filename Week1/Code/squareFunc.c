#include <stdio.h>
#include <cs50.h>


int square(int n);

int main(void)
{
    printf("i?: ");
    int i = get_int();
    printf("%i\n", square(i));
}

int square(int n)
{
    return n*n;
}