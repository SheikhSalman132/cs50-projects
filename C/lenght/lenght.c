#include <stdio.h>
#include "cs50.h" 
#include <string.h> 
int main(void) {
    char *name = get_string("What's your name? "); 
    int n = strlen(name);
    printf("Hello, %s! Your name has %c characters.\n", name, n); 
    return 0;
}
