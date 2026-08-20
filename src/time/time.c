#include <stdio.h>
#include <time.h>

int main(void) {
    // ดึง timestamp ปัจจุบัน (วินาทีตั้งแต่ปี 1970)
    time_t now = time(NULL);

    printf("now: %ld\n", (long)now);
    return 0;
}
