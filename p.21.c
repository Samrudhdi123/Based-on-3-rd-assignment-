#include<stdio.h>
int main()
{
    char name[50];
    int s;
   
 printf("Enter your name: "); scanf("%s", name);
  
  printf("Sensor data: "); scanf("%d", &s);
    if(s > 55)
       
 printf("%s, sensor over threshold.
", name);
    else
      
  printf("%s, sensor normal.
", name);
    return 0;
}
