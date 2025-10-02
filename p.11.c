#include<stdio.h>
int main() {
    char name[50];
    int sensor;
   
 printf("Name: "); scanf("%s", name);
    
printf("Value: "); scanf("%d", &sensor);
    if(sensor > 80)
      
  printf("%s, critical level!
", name);
    else if(sensor > 50)
       
 printf("%s, warning level.
", name);
    else
       
 printf("%s, safe level.
", name);
    return 0;
}
