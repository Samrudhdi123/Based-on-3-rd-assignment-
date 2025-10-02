#include<stdio.h>
int main()
{
    char name[50];
    int s;

    printf("Name: "); scanf("%s", name);

    printf("Sensor data: "); scanf("%d", &s);
    if(s <= 5)
    
    printf("%s, sensor minimal reading.
", name);
    else
    
    printf("%s, sensor adequate reading.
", name);
    return 0;
}
