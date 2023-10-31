#include <stdio.h>
#include <math.h>
main()
{
int min;
printf("請輸入通話幾分鐘：");
scanf("%d", &min);
double C;
if (min<=800){
    C = min * 0.9;
}else if(800 < min < 1500){
    C = min * 0.9 * 0.9;
}else{
    C = min * 0.9 * 0.79;
}
printf("電話費：%.1f\n",C);
}
