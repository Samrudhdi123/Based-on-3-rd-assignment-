#include<stdio.h>
int main()
{
    char user[50];
    int sensor;
   
 printf("User: "); scanf("%s", user);
    
printf("Sensor reading: "); scanf("%d", &sensor);
    if(sensor >= 55)
       
 printf("%s, sensor triggered threshold.
", user);
    else
        
printf("%s, sensor below threshold.
", user);
    return 0;
}
