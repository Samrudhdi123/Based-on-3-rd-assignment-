#include<stdio.h>
int main() {
    char user[50];
    int sensor;
    
printf("Enter name: "); scanf("%s", user);
   
 printf("Sensor: "); scanf("%d", &sensor);
    if(sensor == 0)
       
 printf("%s, sensor inactive.
", user);
    else
        
printf("%s, sensor active.
", user);
    return 0;
}
