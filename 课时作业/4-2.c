#include <stdio.h>
/*
 * Description
 * 利用while或者for循环计算n!的值
提示：n! ＝ 1*2*3…*n
 *
 * Input
 * 一个正整数，1<=n<=10
 *
 * Output
 * n!的值
 */

int main(){
    int i,n;
    scanf("%d",&n);
    int result = 1;
    for (i=1;i<=n;i++)
    {
        result = result*i;
    }
    printf("%d\n",result);
    return 0;
}