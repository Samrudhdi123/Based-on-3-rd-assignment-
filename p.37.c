#include<stdio.h>
int main()
{
    char name[50];
    int level;
 
   printf("Name: "); scanf("%s", name);
    
printf("Sensor level: "); scanf("%d", &level);
    if(level > 75)
        
printf("%s, sensor critical.
", name);
    else
      
  printf("%s, sensor stable.
", name);
    return 0;
}
