#include<stdio.h>
int main()
{
    char user[50];
    int s;
   
 printf("Name: "); scanf("%s", user);
   
 printf("Sensor val: "); scanf("%d", &s);
    if(s != 50)
      
  printf("%s, sensor off threshold.
", user);
    else
        
printf("%s, sensor hits threshold.
", user);
    return 0;
}
