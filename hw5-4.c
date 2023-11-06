#include <stdio.h>
#include <math.h>

int main() {
    int H, M;
    float angle;

    // 讀取輸入的小時和分鐘
    printf("請輸入時間（H M）：");
    scanf("%d %d", &H, &M);

    // 計算時針和分針的夾角
    // 時針每小時走30度，每分鐘走0.5度
    // 分針每分鐘走6度
    float hour_angle = 30 * H + 0.5 * M;
    float minute_angle = 6 * M;

    // 計算夾角，取絕對值
    angle = fabs(hour_angle - minute_angle);

    // 如果夾角大於180度，則取360度減去這個夾角
    if (angle > 180) {
        angle = 360 - angle;
    }

    // 輸出夾角，保留3位小數
    printf("夾角為：%.3f度\n", angle);

    return 0;
} 
