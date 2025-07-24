#include<stdio.h>
#include<string.h>


int main (void)
{
    char* strings[] = {"hello", "hi", "89", "lets"," hhhh", "kkk"};
    char s[100];

    {
        printf ("string: ");
        scanf("%s", s);
    }

    for(int i = 0; i< 6; i++)
    {


        if (strcmp(s, strings[i]) ==0 )


        {
            printf("yes  found your string");
            return 0;
        }
    }
printf(" not find your string");
    return 1;


    
}