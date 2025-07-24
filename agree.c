#include <stdio.h>
#include "cs50.h"

int main(void)
{
    char a = get_char("Have you ever studied? (y/n)\n");

    if (a == 'y' || a == 'Y')
    {
        int b = get_int("How many books  have you studied? ");
        
        if (b == 0)
        {
            printf("Looks like you haven't studied anybook yet. You'll  study soon.\n");
        }
        else
        {
            printf("Wow! You’ve had some interesting experiences, huh?\n");
        }
    }
    else 
    {
        int c = get_int("How much would you be willing to pay for a book? ");
        
        if (c == 0 || c < 0)
        {
            printf("Looks like you're not interested in spending money on books.\n");
        }
        else
        {
            printf("With that budget, you might find something special! Best of luck!\n");
        }
    }

    return 0;
}
