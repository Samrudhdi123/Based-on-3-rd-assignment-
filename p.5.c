#include<stdio.h>
int main()
 {
    char user[50];
    int sensor;

    printf("Your name: "); scanf("%s", user);

    printf("Reading: "); scanf("%d", &sensor);
    if(sensor <= 20)
     
   printf("%s, sensor too low to activate.
", user);
    else
   
     printf("%s, sensor in normal range.
", user);
    return 0;
}
