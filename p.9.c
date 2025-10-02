#include<stdio.h>
int main() {
    char name[50];
    int s;
 
   printf("Name: "); scanf("%s", name);
    
printf("Sensor value: "); scanf("%d", &s);
    if(s > 70)
      
  printf("%s, high alert.
", name);
    else if(s < 30)
       
 printf("%s, low alert.
", name);
    else
     
   printf("%s, sensor normal.
", name);
    return 0;
}
