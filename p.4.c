#include<stdio.h>
int main() {
    char person[50];
    int reading;
    
printf("Enter name: "); scanf("%s", person);
    
printf("Sensor value: "); scanf("%d", &reading);
    if(reading == 75)
        
printf("%s, sensor exactly at threshold.
", person);
    else
        
printf("%s, sensor not at threshold.
", person);
    return 0;
}
