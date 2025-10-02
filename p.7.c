#include<stdio.h>
int main()
 {
    char n[50];
    int sensor;

    printf("Name: "); scanf("%s", n);

    printf("Sensor reading: "); scanf("%d", &sensor);
    if(sensor >= 60 && sensor <= 80)
       
 printf("%s, sensor in safe range.
", n);
    else
        
printf("%s, sensor out of safe range.
", n);
    return 0;
}
