#include<stdio.h>
int main()
{
    char user[50];
    int sensor;
   
 printf("Enter name: "); scanf("%s", user);
    
printf("Input sensor: "); scanf("%d", &sensor);
    if(sensor <= 10)
      
  printf("Hi %s, low sensor reading.
", user);
    else
        
printf("Hi %s, normal sensor reading.
", user);
    return 0;
}
