#include<stdio.h>
#include<string.h>

int main(void)
                  {
 char* names[] = {"Salman", "meeeee"};
char* numbers[]={"+92-333444999000", "+1-69966996699"};

char name [100]; 
 { printf("name: ");
   scanf("%s", name);}

for(int i=0; i<2;i++){
 if(strcmp(names[i],name)==0)

 printf("here is the number %s", numbers[i] );

    return 0;}

                 printf("not found\n");
               }
                   
