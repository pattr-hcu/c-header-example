#include <stdio.h>
#include <string.h>

int main(void) {
    char greeting[50] = "Hello ";
    char name[] = "Somchai";

    // เอา name มาต่อท้าย greeting
    strcat(greeting, name);

    printf("%s\n", greeting); // Hello Somchai
    return 0;
}
