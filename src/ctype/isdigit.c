#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c = '5';

    // เช็คว่าเป็นตัวเลขมั้ย (0-9)
    if (isdigit(c)) {
        printf("%c pen tua lek\n", c);
    } else {
        printf("%c mai chai tua lek\n", c);
    }
    return 0;
}
