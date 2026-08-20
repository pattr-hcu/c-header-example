#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c = 'B';

    // แปลงเป็นตัวพิมพ์เล็ก
    char lower_c = tolower(c);

    printf("%c -> %c\n", c, lower_c); // B -> b
    return 0;
}
