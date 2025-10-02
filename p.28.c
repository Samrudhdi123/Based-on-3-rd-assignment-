#include<stdio.h>
int main()
{
    char name[50];
    int val;
    
printf("Name: "); scanf("%s", name);
   
 printf("Sensor reading: "); scanf("%d", &val);
    if(val == 50)
        
printf("%s, sensor exact threshold.
", name);
    else
       
 printf("%s, sensor different than threshold.
", name);
    return 0;
}
