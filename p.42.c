#include<stdio.h>
int main()
{
    char name[50];
    int s;
  
  printf("Your name: "); scanf("%s", name);
  
  printf("Sensor value: "); scanf("%d", &s);
    if(s > 20)
     
   printf("Hello %s, sensor over warning level.
", name);
    else
       
 printf("Hello %s, sensor normal.
", name);
    return 0;
}
