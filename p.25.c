#include<stdio.h>
int main()
{
    char name[50];
    int val;
    
printf("Name: "); scanf("%s", name);
    
printf("Sensor: "); scanf("%d", &val);
    if(val < 10)
       
 printf("%s, sensor low.
", name);
    else if(val > 60)
      
  printf("%s, sensor high.
", name);
    else
       
 printf("%s, sensor normal.
", name);
    return 0;
}
