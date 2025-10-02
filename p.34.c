#include<stdio.h>
int main()
{
    char name[50];
    int sensor;
    
printf("User: "); scanf("%s", name);
   
 printf("Sensor val: "); scanf("%d", &sensor);
    if(sensor < 20 || sensor > 80)
       
 printf("%s, sensor out of bounds.
", name);
    else
        
printf("%s, sensor normal.
", name);
    return 0;
}
