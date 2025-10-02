#include<stdio.h>
int main()
{
    char name[50];
    int val;
    
printf("Name: "); scanf("%s", name);
  
  printf("Enter sensor: "); scanf("%d", &val);
    if(val != 0)

        printf("%s, sensor triggered.
", name);
    else
        
printf("%s, no trigger.
", name);
    return 0;
}
