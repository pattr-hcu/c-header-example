#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c = ' ';

    // เช็คว่าเป็นช่องว่างมั้ย (space, tab, enter)
    if (isspace(c)) {
        printf("pen chong wang\n");
    }
    return 0;
}
