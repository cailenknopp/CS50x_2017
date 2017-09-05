//"mario_Prototype.c", 07/21/17, Cailen Knopp.
#include <stdio.h>
#include <cs50.h>

void pyramidPrint(int n);

int main(void)
{
    int h;
    
    do
    {
     printf("Height of the Pyramid?: ");
     h = get_int();   
    } while (h >= 24 || h < 0);
    
    
    pyramidPrint(h);
}

void pyramidPrint(int n)
{
    for(int i = 0; i < n; i++)
    {
        printf(" ");
        printf("#");
    }
    printf("\n");
}