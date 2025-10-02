#include<stdio.h>
int main()
{
    char name[50];
    int threshold, reading;
    
printf("Name: "); scanf("%s", name);
    
printf("Sensor reading: "); scanf("%d", &reading);
    threshold = 50;
    if(reading >= threshold)
      
  printf("%s, threshold reached.
", name);
    else
        
printf("%s, below threshold.
", name);
    return 0;
}
