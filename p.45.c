#include<stdio.h>
int main()
{
    char user[50];
    int sensor;
    
printf("Name: "); scanf("%s", user);
   
 printf("Value: "); scanf("%d", &sensor);
    if(sensor == 55)
      
  printf("%s, sensor exact reading.
", user);
    else
       
 printf("%s, sensor different reading.
", user);
    return 0;
}
