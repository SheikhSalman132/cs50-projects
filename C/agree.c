#include <stdio.h>
#include "cs50.h"

int main(void)
{
    char a = get_char("Have you ever been in a relationship? (y/n)\n");

    if (a == 'y' || a == 'Y')
    {
        int b = get_int("How many people have you dated? ");
        
        if (b == 0)
        {
            printf("Looks like you haven't dated anyone yet. You'll find your match soon.\n");
        }
        else
        {
            printf("Wow! You’ve had some interesting experiences, huh?\n");
        }
    }
    else 
    {
        int c = get_int("How much would you be willing to pay for a date? ");
        
        if (c == 0 || c < 0)
        {
            printf("Looks like you're not interested in spending money on dates.\n");
        }
        else
        {
            printf("With that budget, you might find someone special! Best of luck!\n");
        }
    }

    return 0;
}
