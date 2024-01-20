#include <stdio.h>
/*
 * Description
 * 判断某个年份是不是闰年，如果是闰年，请输出“yes”，否则请输出“no”
 *
 * Input
 * 输入一行，只有一个整数x(0<=x<=10000)
 *
 * Output
 * 输出只有一行字符
 */

int main(){
    int year;
    scanf("%d",&year);
    //能被4整除的大多是闰年，但能被100整除而不能被400整除的年份不是闰年
    if(year % 400 == 0 || year % 4 == 0 && year % 100 != 0)//这里是==，进行条件判断
    {
        printf("yes\n");
    }else
    {
        printf("no\n");
    }
    return 0;
}