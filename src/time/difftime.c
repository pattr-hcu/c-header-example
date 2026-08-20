#include <stdio.h>
#include <time.h>

int main(void) {
    time_t t1 = 1000;
    time_t t2 = 1060;

    // หาผลต่างเวลา (t2 - t1) หน่วยเป็นวินาที
    double diff = difftime(t2, t1);

    printf("diff: %.0f sec\n", diff); // 60 sec
    return 0;
}
