#include<stdio.h>
int main() {
    char name[50];
    int value;
    
printf("User name: "); scanf("%s", name);
    printf("Sensor input: "); scanf("%d", &value);
    if(value < 30)
       
 printf("Warning %s, sensor too low.
", name);
    else
        
printf("Sensor level is okay, %s.
", name);
    return 0;
}
