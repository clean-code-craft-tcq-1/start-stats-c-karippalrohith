#include "stats.h"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    float sum = 0;
    int i = 0;
    s.average = 0;
    s.min = numberset[0];
    s.max = numberset[0];
    
    for(i=0;i<setlength;i++)
    {
        sum = sum + numberset[i];
        
        if(numberset[i] < s.min)
        {
           s.min =  numberset[i];
        }
        
         if(numberset[i] > s.max)
        {
           s.max =  numberset[i];
        }
    }
    
    s.average = sum/setlength;

    return s;
}

    void emailAlerter()
    {
        emailAlertCallCount = 1;
    }
    
    void ledAlerter()
    {
        ledAlertCallCount = 1;
    }

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], struct Stats computedStats)
{

}
