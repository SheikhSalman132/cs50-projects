#include<stdio.h>
#include<string.h>


int main (void)
{
    char* strings[] = {"sec", "now", "69", "lets"," dooo", "it"};
    char s[100];

    {
        printf ("string: ");
        scanf("%s", s);
    }

    for(int i = 0; i< 6; i++)
    {


        if (strcmp(s, strings[i]) ==0 )


        {
            printf("yes darling I have find your string");
            return 0;
        }
    }
printf("sorry darling I have not find your string");
    return 1;


    
}