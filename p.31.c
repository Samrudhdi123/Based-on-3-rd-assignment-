#include<stdio.h>
int main()
{
    char name[50];
    int level;
   
printf("Name: "); scanf("%s", name);
   
 printf("Sensor level: "); scanf("%d", &level);
    if(level >= 90)
        printf("%s, critical sensor level!
", name);
    else
      
  printf("%s, normal sensor level.
", name);
    return 0;
}
