#include<stdio.h>
int main()
{
    char name[50];
    int val;

    printf("Name: "); scanf("%s", name);
  
  printf("Sensor value: "); scanf("%d", &val);
    if(val >= 85)
      
  printf("%s, sensor near max range.
", name);
    else
       
 printf("%s, sensor safe.
", name);
    return 0;
}
