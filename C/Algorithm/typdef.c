#include <stdio.h>
#include <string.h>

typedef struct {
    char* name;
    char* number;
} phbook;

int main()
{           

    phbook person [2];
    int found = 0;
    char input[30];
    
    person[0].name="Salman";
    person[0].number="+92-76897676966y";

    person[1].name="meeeee";
    person[1].number="8578578585;

   

    printf("name : ");
    scanf("%29s ", input);



    
    
       for(int i = 0; i<2; i++) {
       
                if(strcmp(input, person[i].name)==0)

            printf( "found the number is %s \n", person[i].number);
            found = 0;
            break;

            
            }
           
                    printf("naaa ! no number is here !");

            




}
