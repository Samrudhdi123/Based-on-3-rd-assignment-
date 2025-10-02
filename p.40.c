#include<stdio.h>
int main()
{
    char name[50];
    int val;
    
printf("Name: "); scanf("%s", name);
    
printf("Sensor input: "); scanf("%d", &val);
    if(val > 45)
        
printf("%s, above baseline.
", name);
    else
        
printf("%s, below baseline.
", name);
    return 0;
}
