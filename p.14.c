#include<stdio.h>
int main() {
    char n[50];
    int level;
    
printf("Name: "); scanf("%s", n);
  
  printf("Sensor Level: "); scanf("%d", &level);
    if(level <= 60)
        
printf("%s, sensor acceptable.
", n);
    else
      
  printf("%s, sensor high.
", n);
    return 0;
}
