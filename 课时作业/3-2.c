#include <stdio.h>
/*
 * Description
 * 读取一个整型数，字符，浮点数，分别到变量i，j，k 中，然后将i，j，k直接相加并输出，
小数点后保留两位小数，不用考虑输人的浮点数的小数部分超过了两位
 *
 * Input
 * 一个整型数，字符，浮点数
 *
 * Output
 * i，j，k 三个变量的求和值
 */

int main(){
    int i;
    char j;
    float k;
    scanf("%d %c%f",&i,&j,&k);//%c前没空格，scanf()将读取标准输入流中的第一个字符，%c前有空格，scanf()则读取标准输入流中第一个非空白字符
    printf("%5.2f\n",i+j+k);
    return 0;
}