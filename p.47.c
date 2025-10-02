#include<stdio.h>
int main()
{
    char user[50];
    int val;
    
printf("Name: "); scanf("%s", user);

    printf("Sensor: "); scanf("%d", &val);
    if(val > 65)
     
   printf("%s, alert! sensor high.
", user);
    else
      
  printf("%s, sensor normal.
", user);
    return 0;
}
