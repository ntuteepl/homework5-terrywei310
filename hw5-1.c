#include <stdio.h>
#include <math.h>
main()
{
float C;
printf("請輸入攝氏溫度：");
scanf("%f", &C);
double F = roundf((C * 9.0 / 5.0 + 32.0) * 10) / 10.0;
// 以 float 計算 ex
printf("%.1f℉", F);
}
