//"divider.c", made in CS50 IDE. 07/18/2017
#include <stdio.h>
#include <cs50.h>

int main(void) 
{
    printf("X Value = ");
    float x = get_float();
    
    printf("Y Value = ");
    float y = get_float();
    
    printf("X/Y = %f\n", x/y);
}