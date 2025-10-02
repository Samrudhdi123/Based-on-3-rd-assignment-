#include<stdio.h>
int main()
{
    char user[50];
    int sensor;
    
printf("Enter user name: "); scanf("%s", user);

    printf("Sensor value: "); scanf("%d", &sensor);
    if(sensor > 25 && sensor < 75)
      
  printf("%s, sensor normal range.
", user);
    else
      
  printf("%s, sensor out of range.
", user);
    return 0;
}
