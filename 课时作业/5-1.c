#include <stdio.h>
/*
 * Description
 * 输入N个数（N小于等于100），输出数字2的出现次数
 * 解题提示：
 * 整数数组读取5个整型数的方法如下：
 * int a[100];
 * for (int i=0;i<5;i++)
 * {
 * scanf("%d",&a[i]);
 * }
 *
 * Input
 * 输入的格式是两行
 * 第一行输入要输的元素个数，比如5
 * 第二行输入1 2 2 3 2，那么输出结果为3，因为2出现了3次
 *
 * Output
 * 统计数字2出现的次数
 */

int main(){
    int a[100];
    int i,b;
    int total=0;
    scanf("%d",&b);//输入要输的元素个数
    for (i=0;i<b;i++){//数组，这里是i<b，不能有=
        scanf("%d",&a[i]);//往数组里元素读入数据
    }
    for (i=0;i<b;i++){
        if(a[i]==2){
            total++;
        }
    }
    printf("%d",total);
    return 0;
}