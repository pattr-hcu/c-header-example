#include <stdio.h>
#include <time.h>

int main(void) {
    struct timespec ts;

    // ดึงเวลาแบบละเอียดระดับ nanosecond (1 วิ = 1,000,000,000 ns)
    timespec_get(&ts, TIME_UTC);

    printf("sec: %ld, nanosec: %ld\n", (long)ts.tv_sec, ts.tv_nsec);
    return 0;
}
