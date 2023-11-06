#include <stdio.h>
#include <math.h>
int main() {
    float C;
    printf("請輸入攝氏溫度：");
    scanf("%f", &C);
    double f = (C * 9.0 /5.0) + 32;
    double F = round(f * 10) / 10.0;
    printf("%.2f℉\n", F);
    return 0;
}


