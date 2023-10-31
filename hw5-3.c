#include <stdio.h>
#include <math.h>
main()
{
int hr;
int hp;
double pay;

printf("請輸入整月的總工時及時薪(空格分隔)：");
scanf("%d %d", &hr, &hp);

if (hr <= 60){
    pay = hp * hr;
}else if(hr <= 120){
    pay = 60 * hp + (hr - 60) * hp * 1.33 ;
}else{
    pay = 60 * hp + 60 * hp * 1.33 + (hr - 120) * hp * 1.66;
}
printf("月薪為：%.1lf\n",pay);
}
