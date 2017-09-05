//'conditions.c', 07/20/2017. Using a long long for a great value.
#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("A whole number please?: ");
    long long i = get_long_long();
    
    if (i < 0)
    {
        printf("%lld is negative\n", i);
    }
    else if (i > 0)
    {
        printf("%lld is positive\n", i);
    }
    else
    {
        printf("%lld is 0\n", i);
    }
}