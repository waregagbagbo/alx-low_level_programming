#include <stdio.h>
/*
 *
 *
 *
 */
int main() {
    int intType;
    float floatType;
    long long intType;
    char charType;
    long intType;

    // sizeof evaluates the size of a variable
    printf("Size of char: %zu byte\n", sizeof(charType));
    printf("Size of int: %zu byte\n", sizeof(intType));
    printf("Size of long int: %zu byte\n", sizeof(long intType));
    printf("Size of long long int: %zu byte\n", sizeof(long long intType));
    printf("Size of float: %zu byte\n", sizeof(floatType));
    
    return 0;
}

