#include<stdio.h>
int main()
{
    char user[50];
    int sensor;
    
printf("Enter name: "); scanf("%s", user);
    
printf("Sensor value: "); scanf("%d", &sensor);
    if(sensor == 100)
     
   printf("%s, sensor maxed out!
", user);
    else
    
    printf("%s, sensor below max.
", user);
    return 0;
}
