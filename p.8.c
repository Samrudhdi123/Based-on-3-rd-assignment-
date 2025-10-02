#include<stdio.h>
int main()
 {
    char uname[50];
    int sensor;
  
  printf("Input name: "); scanf("%s", uname);

    printf("Value: "); scanf("%d", &sensor);
    if(sensor < 40 || sensor > 90)
        
printf("%s, sensor abnormal.
", uname);
    else

        printf("%s, sensor normal.
", uname);
    return 0;
}
