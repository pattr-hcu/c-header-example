#include <stdio.h>
#include <string.h>

int main(void) {
    char pass[] = "1234";

    // เช็คว่าตรงมั้ย (ถ้าเหมือนกันเป๊ะจะได้ 0)
    if (strcmp(pass, "1234") == 0) {
        printf("pass thuk tong\n");
    } else {
        printf("pass phid\n");
    }
    return 0;
}
