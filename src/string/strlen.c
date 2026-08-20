#include <stdio.h>
#include <string.h>

int main(void) {
    char text[] = "hello";

    // นับว่ามีกี่ตัวอักษร
    int len = strlen(text);

    printf("length: %d\n", len); // 5
    return 0;
}
