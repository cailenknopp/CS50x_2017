//07/20/2017
#include <stdio.h>
#include <cs50.h>

/*
There are many ways in which to print out "Cough" three times, on three lines.

One way is this:

int main(void)
{
    printf("Cough\n");
    printf("Cough\n");
    printf("Cough\n");
}

Now, this works. It will yield the following in a terminal window.

Cough
Cough
Cough

That is, what we wanted it to do, so by deisgn, this program works. Now there is another, not to say more efficent way to do this, but a better way:

int main(void)
{
    for(int i = 0; i < 3; i++)
    {
        printf("Cough\n");
    }
}

This will as well, print out three lines saying "Cough".

Cough
Cough
Cough

However, there is a third way. Creating my own function to print "Cough", then creating a loop to execute it three times, is a way that uses more intuition and thought, but
will work all the same. It indeed is better engineered, a better design. Executing it this way will help my understanding of CS and software engineering by practising the 
fundimentals, like writting and executing functions, loops, and declerations of functions.

See below:

void cough(void);

int main(void)
{
    for(int i = 0; i < 3; i++)
    {
        cough();
    }
}

void cough(void)
{
 printf("Cough\n");   
}

That may seem more complex, and it is. There is one final way to make this program more readable, while maintaining the "engineer" like design I just created.

See below.
*/

void cough(int n);

int main(void)
{
    cough(3);
}

void cough(int n)
{
    for(int i = 0; i < n; i++)
 {
    printf("Cough\n"); 
 }
}