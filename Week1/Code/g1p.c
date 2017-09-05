#include <stdio.h>
#include <cs50.h>
#include <math.h>

//int greedy(float n);

int main(void)
{
    float change = get_float();
    
    float twofive = ((fmod(change, 0.25)));
    
    printf("%0f\n", twofive);
    /*if ((fmod(change, 0.25)) == 0)
    {
        printf("")
    }
    */
    
    
    //float divide = change/0.25;
    
    //greedy(change);
    
    //printf("%lf\n", (fmod(change, 0.25)));
    
}
