#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){

                char s[100];
                char t[100];
                 printf("string:  ");

            
               fgets( s, sizeof(s), stdin);
                
             
                 printf("string: ");
                fgets(t, sizeof(t), stdin);

                if(strlen(t)>0)
                {
                    for(int i=0; t[i]!= '\0'; i++){
                            t[i]= toupper(t[i]);
                        }
                         

                }

                printf("s= %s", s);
                printf("t= %s", t);
                


            }

