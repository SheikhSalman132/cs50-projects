#include<stdio.h>



int main (void)
{
 int n;
 long long fric =1;

 
 printf("Input a vaue ");

 
 scanf ("%d", &n);

 if(n<=0)
            {

    printf("Input a positive valur ERROR 404");
    
                                                 }


 for(int i=1; i<=n; i++)
                            {

                                    fric *= i;
                            }
                            

        printf(" the factorial of %d is %llu\n", n, fric );
    
}