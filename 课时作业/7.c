#include <stdio.h>
/*
 * Description
 * 假如有 n 个台阶，一次只能上 1 个台阶或 2 个台阶，请问走到第 n 个台阶有几种走法？
 * 为便于读者理解题意，这里举例说明如下：假如有 3 个台阶，那么总计就有 3 种走法
 * 第一种为每次上 1 个台阶，上 3 次
 * 第二种为先上 2 个台阶，再上 1 个台阶
 * 第三种为先上 1 个台阶，再上 2 个台阶
 * 输入为 n，输出为走到第n个台阶，有几种走法
 *
 * Input
 * 比如输入是3
 *
 * Output
 * 如果输入是3，走到第3个台阶的走法总计有3种，1,1,1和1,2和2,1，输出为3
 */
//int step(int n){
//    if(1==n || 2==n){
//        return n;
//    }//    return step(n-1)+ step(n-2);
//}
long step(long n) {
    if (1 == n) {
        return 1;
    }
    if (2 == n) {
        return 2;
    }
    long n2 = 1;//n-2
    long n1 = 2;//n-1
    long nn = 0;
    for (int i = 3; i <= n; i++) {
        nn = n1 + n2;
        n2 = n1;
        n1 = nn;
    }
    return nn;
}
int main(){
    int n;
    scanf("%d",&n);
    printf("%d",step(n));
    return 0;
}
