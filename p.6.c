#include<stdio.h>
int main()
 {
    char name[50];
    int val;
    
printf("Name: "); scanf("%s", name);
   
 printf("Sensor value: "); scanf("%d", &val);
    if(val != 50)
       
 printf("%s, sensor not matching threshold.
", name);
    else
        
printf("%s, sensor at threshold.
", name);
    return 0;
}
