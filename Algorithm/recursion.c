#include <stdio.h>
int draw (int n );

int main (void){

                       
                        int n;
                        printf("heigt");
                        scanf("%d",&n);
                        draw(n);

}

int draw (int n ){

     if(n<=0) {
     
               return 0;      
     }     
     
               
     draw(n-1);

     for(int i=0; i<n; i++ ){

          printf("#");
         
          

}

printf("\n");
return 0;


     }
               
                                    


