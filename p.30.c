#include<stdio.h>
int main()
{
    char name[50];
    int sensor;
   
 printf("User: "); scanf("%s", name);
  
  printf("Value: "); scanf("%d", &sensor);
    if(sensor > 0)
        printf("%s, sensor triggered.
", name);
    else
       
 printf("%s, no sensor trigger.
", name);
    return 0;
}
