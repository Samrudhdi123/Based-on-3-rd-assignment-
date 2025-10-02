#include<stdio.h>
int main() {
    char name[50];
    int sensor;
    
printf("Name: "); scanf("%s", name);

    printf("Sensor reading: "); scanf("%d", &sensor);
    if(sensor >= 100)
      
  printf("%s, sensor hit or exceeded limit.
", name);
    else
        
printf("%s, sensor below limit.
", name);
    return 0;
}
