#include <stdio.h>
#include <time.h>

int main(void) {
    time_t now = time(NULL);

    // แปลงเวลาตัวเลขเป็นข้อความวันที่/เวลา อ่านง่ายๆ
    printf("time: %s", ctime(&now));
    return 0;
}
