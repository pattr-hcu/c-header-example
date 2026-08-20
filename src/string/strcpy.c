#include <stdio.h>
#include <string.h>

int main(void) {
    char src[] = "cat";
    char dest[20];

    // ก๊อป src ไปใส่ dest
    strcpy(dest, src);

    printf("dest: %s\n", dest); // cat
    return 0;
}
