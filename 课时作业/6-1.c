#include <stdio.h>
/*
 * Description
 * 输人一个整型数，存入变量i，通过子函数change把主函数的变量i除2，然后打印i
 * 例如如果输人的为10，打印出5，如果输入的为7，打印出3
 *
 * Input
 * 一个整型数
 *
 * Output
 * 对应整型数除2后的商
 */

void change(int *p)//在子函数中去改变某个变量的值
{
    *p = *p/2;
}
//int main(){
//    int i;
//    scanf("%d",&i);
//    change(&i);
//    printf("%d",i);
//    return 0;
//}
int main(){
    int i;
    int *p = &i;
    scanf("%d",p);
    change(&i);
    printf("%d",*p);
    return 0;
}