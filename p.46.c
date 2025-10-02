#include<stdio.h>
int main()
{
    char name[50];
    int s;

    printf("Enter name: "); scanf("%s", name);
 
   printf("Sensor val: "); scanf("%d", &s);
    if(s < 5)
        
printf("%s, sensor reading too low.
", name);
    else
       
 printf("%s, sensor acceptable.
", name);
    return 0;
}
