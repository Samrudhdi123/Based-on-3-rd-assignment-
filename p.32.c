#include<stdio.h>
int main()
{
    char person[50];
    int value;
    
printf("Person: "); scanf("%s", person);
    
printf("Sensor val: "); scanf("%d", &value);
    if(value <= 40)
        
printf("%s, low sensor reading.
", person);
    else
       
 printf("%s, high sensor reading.
", person);
    return 0;
}
