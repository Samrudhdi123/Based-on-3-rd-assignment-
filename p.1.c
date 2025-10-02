#include<stdio.h>
int main() {
    char name[50];
    int sensor;
  
  printf("Enter your name: "); scanf("%s", name);
  
  printf("Enter sensor value: "); scanf("%d", &sensor);
    if(sensor > 50)
       
 printf("Hello %s, sensor value is above threshold.
", name);
    else
      
  printf("Hello %s, sensor value is below threshold.
", name);
    return 0;
}
