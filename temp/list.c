#include<stdio.h>
#include<stdlib.h>


int main (void )
{
   char *list = malloc(3*sizeof(int));
    if (list ==NULL)
    {
       return 1 ;
    }

        list[0]=1;
        list[1]=2;
        list[2]=3;

        for (int i = 0 ; i< 3; i++)
        {     
            printf("%i \n", list[i]);
        }





}