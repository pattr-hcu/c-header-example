#include <stdio.h>
#include <time.h>

int main(void) {
    clock_t start = clock();

    // วนลูปเล่นๆ ให้กินเวลา
    for (int i = 0; i < 1000000; i++);

    clock_t end = clock();

    // ดูเวลา cpu ที่ใช้ไป (หน่วยเป็นวินาที)
    double time_spent = (double)(end - start) / CLOCKS_PER_SEC;
    printf("used time: %f sec\n", time_spent);
    return 0;
}
