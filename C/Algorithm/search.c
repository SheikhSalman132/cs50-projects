#include<stdio.h>


int main (void)
{


        int numbers [] = {10, 20, 30, 40, 50, 60, 69, 70, 80, 90, 96, 100 };

        int n;
         {
            
                    printf ("Number:  ");
                                         scanf (  "%d", &n); 
                                                            };
        

        for( int i = 0; i < 12; i++ )
        {                         



                if (numbers [i]==n)
                {
                    
                    printf("well darling I have find your number");
                    return 0;
                }


               

        }
          
        {
            printf("sorry darling I have not find your number");
            return 1;
        }


}