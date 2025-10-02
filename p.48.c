#include<stdio.h>
int main()
{
    char name[50];
    int sensor;
  
  printf("Name: "); scanf("%s", name);
   
 printf("Sensor value: "); scanf("%d", &sensor);
    if(sensor == 22)
    
    printf("%s, sensor at specific threshold.
", name);
    else
       
 printf("%s, sensor not at threshold.
", name);
    return 0;
}
