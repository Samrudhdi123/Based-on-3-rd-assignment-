#include<stdio.h>
int main()
{
    char name[50];
    int val;
    
printf("Name: "); scanf("%s", name);
    
printf("Enter sensor: "); scanf("%d", &val);
    if(val >= 30 && val <= 60)
       
 printf("%s, sensor safe range.
", name);
    else
      
  printf("%s, sensor unsafe range.
", name);
    return 0;
}
