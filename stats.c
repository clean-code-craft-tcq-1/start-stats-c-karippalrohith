#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    float sum = 0;
    int i = 0;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    
    for(i=0;i<setlength;i++)
    {
        sum = sum + numberset[i];
    }
    s.average = sum/setlength;
    return s;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
