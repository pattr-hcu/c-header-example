#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c = 'A';

    // เช็คว่าเป็นตัวอักษรมั้ย (a-z, A-Z)
    if (isalpha(c)) {
        printf("%c pen tua akson\n", c);
    } else {
        printf("%c mai chai tua akson\n", c);
    }
    return 0;
}
