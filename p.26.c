#include<stdio.h>
int main()
{
    char name[50];
    int sensor;
    
printf("Name: "); scanf("%s", name);
   
 printf("Sensor value: "); scanf("%d", &sensor);
    if(sensor <= 0)
      
  printf("%s, no sensor reading.
", name);
    else
       
 printf("%s, sensor active.
", name);
    return 0;
}
