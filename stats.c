#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    float sum;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    
    sum = numberset[0]+numberset[1]+numberset[2]+numberset[3]+numberset[4];
    s.average = sum/setlength;
    return s;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
