//"operations.c", CS50 IDE, 7/17/17, @10:46PM ("I'm very tired right now.")

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Value X = ");
    int x = get_int();
    
    printf("Value y = ");
    int y = get_int();
    
    printf("Value X (%i) + Value Y (%i) is equal to: \n%i\n", x, y, x+y);
    printf("Value X (%i) - Value Y (%i) is equal to: \n%i\n", x, y, x-y);
    printf("Value X (%i) * Value Y (%i) is equal to: \n%i\n", x, y, x*y);
}