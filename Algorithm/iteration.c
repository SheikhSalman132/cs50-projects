#include <stdio.h>
int get_size(void);
int print_grid(int size);


int main (void){

        int n = get_size();
        print_grid(n);
        return 0;       


}



int get_size(void){

int size;
do{
  printf ("give size:  ");
scanf("%d", &size);

}while(size<1);
return size;
  
}




    int print_grid(int size){
        for (int i = 1; i <= size; i++) {        
            for (int j = 1; j <= i; j++) {       
                printf("#");
            }
            printf("\n"); 
        }
              return 0 ;
    }