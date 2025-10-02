#include<stdio.h>
int main(){
    char name[50];
    int s;
    
printf("Name: "); scanf("%s", name);
    
printf("Sensor reading: "); scanf("%d", &s);
    if(s == 100)
        
printf("%s, sensor max.
", name);
    else
        
printf("%s, sensor below max.
", name);
    return 0;
}
