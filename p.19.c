#include<stdio.h>
int main()
{
    char user[50];
    int sensor;
    
printf("Name: "); scanf("%s", user);
    
printf("Enter sensor value: "); scanf("%d", &sensor);
    if(sensor <= 0)
   
     printf("%s, sensor offline.
", user);
    else
      
  printf("%s, sensor active.
", user);
    return 0;
}
