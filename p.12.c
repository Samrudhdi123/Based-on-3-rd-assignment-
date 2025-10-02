#include<stdio.h>
int main() {
    char user[50];
    int val;
   
 printf("Name: "); scanf("%s", user);
    
printf("Sensor reading: "); scanf("%d", &val);
    if(val < 25)
      
  printf("%s, below minimum.
", user);
    else if(val > 75)
       
 printf("%s, above maximum.
", user);
    else
      
  printf("%s, in range.
", user);
    return 0;
}
