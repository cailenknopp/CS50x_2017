#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Welcome to Hartman Simulator v.1.0\n");
    
    printf("Would you like to begin (y/n)?: ");
    char c = get_char();
    
    if (c == 'y' || c == 'Y')
    {
        for(int i = 1; i > 0; i++)
        {
            printf("Say zero o'clock\n");
            printf("Say Zaboomafoom\n");
            printf("Say Blue's Clues\n");
        }
        
    }
    else if (c == 'n' || c == 'n')
    {
        return 0;
    }
}