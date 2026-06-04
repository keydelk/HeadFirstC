#include <stdio.h>
#include <limits.h>

int main() {
    printf("The size of a char is %lu\nThe max size is %d\n\n", sizeof(char), CHAR_MAX);
    printf("The size of a short is %lu\nThe max is %d\n\n", sizeof(short), SHRT_MAX);
    printf("The size of an int is %lu\nThe max is %d\n\n", sizeof(int), INT_MAX);
    printf("The size of a long is %lu\nThe max is %ld\n\n", sizeof(long),
           LONG_MAX);

    // Testing max sizes with overflows
    char maxc = CHAR_MAX;
    char ovrc = maxc + 1;

    printf("Demonstrating overflows: maxc = %d, maxc + 1 = %d\n", maxc, ovrc);



    return 0;

}
