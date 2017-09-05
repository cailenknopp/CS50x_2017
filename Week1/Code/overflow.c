#include <stdio.h>

int main(void)
{
        int n = 1;
        for (int i = 0; i < 64; i++)
        {
            printf("n = %i\n", n);
            n = n * 2;
        }
        return 0;
}