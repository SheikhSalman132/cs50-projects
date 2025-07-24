#include "cs50.h"
#include <stdio.h>

void B_calculator(void);

int main(void) {
    B_calculator(); 
}


void B_calculator(void) {
    printf("1 for summing, 2 for subtracting, 3 for multiplication, 4 for division\n\n");

    int n = get_int("Choose an arithmetic function (1-4): ");

    if (n == 1) {
        long x = get_long("x: ");
        long y = get_long("y: ");
        printf("Sum: %li\n", x + y);
    } 
    else if (n == 2) {
        long x = get_long("x: ");
        long y = get_long("y: ");
        printf("Difference: %li\n", x - y);
    } 
    else if (n == 3) {
        long x = get_long("x: ");
        long y = get_long("y: ");
        printf("Product: %li\n", x * y);
    } 
    else if (n == 4) {
        float x = get_float("x: ");
        float y = get_float("y: ");
        if (y != 0) {
            printf("Quotient: %.2f\n", x / y);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } 
    else {
        printf("Invalid choice. Please select between 1 and 4.\n");
    }
}
