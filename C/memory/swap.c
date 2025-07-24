#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b);

int main(void)
{

int x = 1;
int y = 2 ;
 printf("the value of x is %i  \n  the value of y is %i", x, y);
 
 swap(&x, &y);
 printf("the invers value of x is  %i  \n  the invers value of y is %i", x , y );


}





/* if we added the actual container aka the int temp =a we will face the problem that 
when usining this in main we will have a problem that the orignal value will 
not cahnge rather the container vaue will change to solve that problem we 
have made the temp values as a pointer because so that it may not change 
the new container but point to the orignal value and swap them */


void swap(int *a, int *b)
{

        int temp = *a;
         *a = *b; 
         *b = temp;

}