#include <stdio.h>
#include <ctype.h>

int main(void) {
    char c1 = '9';
    char c2 = '$';

    // เช็คว่าเป็นตัวเลขหรือตัวอักษรมั้ย
    printf("%c: %d\n", c1, isalnum(c1)); // != 0 (จริง)
    printf("%c: %d\n", c2, isalnum(c2)); // 0 (เท็จ)
    return 0;
}
