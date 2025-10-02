#include<stdio.h>
int main(){
    char user[50];
    int s;
  
  printf("User name: "); scanf("%s", user);
   
 printf("Sensor: "); scanf("%d", &s);
    if(s < 10)
       
 printf("%s, sensor low.
", user);
    else if(s > 90)
       
 printf("%s, sensor high.
", user);
    else
       
 printf("%s, sensor normal.
", user);
    return 0;
}
