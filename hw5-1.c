#include <stdio.h>

int main() {
    float C;
    printf("請輸入攝氏溫度：");
    scanf("%f", &C);

    // 將攝氏溫度轉換為華氏溫度，保留一位小數
    double F = ((C * 9.0 / 5.0) + 32.0);
    // 取得小數部分
    double decimal = F - (int)F;
    // 如果小數部分大於等於0.5，則進位
    if (decimal >= 0.5) {
        F = (int)F + 1;
    } else {
        F = (int)F;
    }

    // 以 float 計算 ex
    printf("%.2f℉\n", F);
    
    return 0;
}

