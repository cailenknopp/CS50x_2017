/*Demonstrating floating-point imprecision, 07/19/2017*/
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("%.50f\n", (float) 1 / (float) 2);
}