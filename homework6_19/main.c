#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROLL 36000
#define SIZE 13

int main(void)
{
    int face1;
    int face2;
    int sum;
    int roll;
    int frequency[SIZE]={0};

    srand(time(NULL));

    for(roll=1;roll<ROLL;roll++)
    {
        face1=1+rand()%6;
        face2=1+rand()%6;
        sum=face1+face2;
        frequency[sum]++;
    }
    printf("%s%13s%17s%17s\n","Sum","Frequency","Expected(%)","Actual(%)");

    int expectedWays[SIZE]={0,0,1,2,3,4,5,6,5,4,3,2,1};
    for(sum=2;sum<=12;sum++)
    {
        double expectedPercent = (expectedWays[sum] / 36.0) * 100.0;
        double actualPercent = ((double)frequency[sum] / ROLL) * 100.0;

        printf("%3d%13d%16.2f%%%16.2f%%\n",
               sum, frequency[sum], expectedPercent, actualPercent);
    }
    return 0;
}