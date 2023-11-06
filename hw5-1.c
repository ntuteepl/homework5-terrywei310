#include <stdio.h>

int main() {
    float C;
    printf("請輸入攝氏溫度：");
    scanf("%f", &C);

    double f = (C * 9.0 / 5.0) + 32;
    int temp = f * 10 + 0.5;
    double F = temp / 10.0;

    printf("%.2f℉\n", F);
    return 0;
}


