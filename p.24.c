#include<stdio.h>
int main()
{
    char n[50];
    int sensor;
   
 printf("Name: "); scanf("%s", n);
    
printf("Input sensor: "); scanf("%d", &sensor);
    if(sensor > 80)
       
 printf("%s, high alert!
", n);
    else
       
 printf("%s, normal reading.
", n);
    return 0;
}
