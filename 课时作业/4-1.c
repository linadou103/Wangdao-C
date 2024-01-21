#include <stdio.h>
/*
 * Description
 * 输入一个整型数，判断是否是对称数，如果是，输出 yes，否则输出 no，不用考虑这个整型数过大，int 类型存不下，不用考虑负值；
例如 12321 是对称数，输出 yes，124421 是对称数，输出 yes，1231 不是对称数，输出 no
 *
 * Input
 * 一个整型数
 *
 * Output
 * 输出是yes,或者no
 */

int main(){
    int a,b,c;
    scanf("%d",&a);
    b=0;
    c=a;//用c来保存a的值
    while (a)//想要这个数逆置过来，使用while循环
    {
        b = b * 10 + a % 10;//通过%取余得到a中的最后一位数字
        a = a / 10;//将a除以10，每一次去掉了最后一位数字，直到a=0，跳出循环
    }
    if (b == c){
        printf("Yes\n");
    } else{
        printf("No\n");
    }
    return 0;
}
