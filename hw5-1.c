#include <stdio.h>
#include <math.h>

int main() {
    float C;
    printf("請輸入攝氏溫度：");
    scanf("%f", &C);
    
    double F = roundf((C * 9.0 / 5.0 + 32.0) * 10) / 10.0;
    
    // 直接輸出 F，不需要進行額外的四捨五入
    printf("%.1f℉", F);
    
    return 0;
}

