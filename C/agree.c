#include <stdio.h>
#include "cs50.h"

int main(void)
{
    char a = get_char("Have you ever read a book ? (y/n)\n");

    if (a == 'y' || a == 'Y')
    {
        int b = get_int("How many books have you read? ");
        
        if (b == 0)
        {
            printf("Looks like you haven't read any books yet. You'll find your book soon.\n");
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
            printf("With that budget, you might find some thing special! Best of luck!\n");
        }
    }

    return 0;
}
