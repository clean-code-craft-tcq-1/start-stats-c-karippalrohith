#include "stats.h"

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
    
   // if(setlength != 0)
   // {
        s.average = sum/setlength;
  //  }
    //else
    //{
         if(s.average.isNaN())
         {
           s.average = 0;  
         }
    //}
    return s;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
