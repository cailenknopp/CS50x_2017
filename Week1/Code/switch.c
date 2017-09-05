#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char i = get_char();
    
    switch (i)
    {
        case 'y':
        case 'Y':
            printf("Yes\n");
            break;
        
        case 'n':
        case 'N':
            printf("No\n");
            break;
        
        default:
            printf("error\n");
    }
}