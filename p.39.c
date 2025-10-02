#include<stdio.h>
int main()
{
    char user[50];
    int s;
    
printf("Name: "); scanf("%s", user);
   
 printf("Sensor: "); scanf("%d", &s);
    if(s < 30)
       
 printf("%s, low sensor warning.
", user);
    else if(s > 70)
      
  printf("%s, high sensor warning.
", user);
    else
       
 printf("%s, sensor normal.
", user);
    return 0;
}
