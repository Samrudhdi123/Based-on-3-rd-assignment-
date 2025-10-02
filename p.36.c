#include<stdio.h>
int main()
{
    char name[50];
    int s;
    
printf("Name: "); scanf("%s", name);
   
 printf("Sensor val: "); scanf("%d", &s);
    if(s == 0)
      
  printf("%s, sensor off.
", name);
    else
       
 printf("%s, sensor on.
", name);
    return 0;
}
