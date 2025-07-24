#include <stdio.h>
#include "cs50.h"
int get_negative_int(void);

int main (void)
{
        int i = get_negative_int();

{
        int j = 69;
        printf( "here is your answer %d    \n  ",  i + j );

}

}

int get_negative_int(void)
{
        int n ;
   do
   {
       get_int("Give the value of negative integear");
   } while (n < 0);

   

}