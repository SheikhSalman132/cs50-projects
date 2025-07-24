#include"cs50.h"
#include<stdio.h>
int get_size (void);
void print_grid (int size);



int main(void)
{

// get size of  grid

int n = get_size();
// grid prontonmg 

print_grid(n);

}

int get_size(void)
{

int n;

do
{
    n = get_int("what is your size");
} while (n < 1);

return n;

}

void print_grid(int size)
{
int i,j;
for ( i = 0; i < size; i++)
{
    for ( j = 0; j < size ; j++)
    {
        printf("#");
    }
    printf("\n");
    
}



}
