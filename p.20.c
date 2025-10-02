#include<stdio.h>
int main()
{
    char name[50];
    int sensor;
    
printf("Name: "); scanf("%s", name);
  
  printf("Sensor reading: "); scanf("%d", &sensor);
    if(sensor >= 90)
      
  printf("%s, high alert!
", name);
    else if(sensor >= 70)
       
 printf("%s, caution.
", name);
    else
      
  printf("%s, normal.
", name);
    return 0;
}
