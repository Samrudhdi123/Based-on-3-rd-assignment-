#include<stdio.h>
int main() {
    char name[50];
    int reading;
  
  printf("Enter your name: "); scanf("%s", name);
  
  printf("Sensor input: "); scanf("%d", &reading);
    if(reading >= 45)
       
 printf("%s, sensor meets threshold.
", name);
    else
      
  printf("%s, sensor below threshold.
", name);
    return 0;
}
