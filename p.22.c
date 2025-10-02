#include<stdio.h>
int main()
{
    char user[50];
    int val;
    
printf("Name: "); scanf("%s", user);
    
printf("Sensor val: "); scanf("%d", &val);
    if(val == 0)
       
 printf("%s, no detection.
", user);
    else
      
  printf("%s, detection confirmed.
", user);
    return 0;
}
