#include <stdio.h>
#include "cs50.h"

int main(void)
{
  int scores [3];
  
     scores[0]= get_int ("what was the score in chemistry:");
     scores[1]= get_int ("what was the score in Physics:");
     scores[2]= get_int ("what was the score in biology");

     
             int sum = (scores[0]+scores[1]+scores[2]);
             int average =  sum / 3;



                printf("your average score %d is \n ", average );   
    

    return 0; 
}
