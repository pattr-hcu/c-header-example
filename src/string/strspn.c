#include <stdio.h>
#include <string.h>

int main(void) {
    char str[] = "123abc";
    char num[] = "0123456789";

    // นับว่าข้างหน้ามีตัวเลขติดกันกี่ตัว
    int count = strspn(str, num);

    printf("num prefix count: %d\n", count); // 3
    return 0;
}
