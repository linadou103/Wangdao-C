#include <stdio.h>
#include <stdlib.h>
/*
 * Description
 * 输人一个整型数，然后申请对应大小空间内存，然后读取一个字符串，字符串的输入长度小于最初输人的整型数大小
 * 最后输出输入的字符串即可 (无需考虑输入的字符串过长，超过了内存大小)
 * 注意下面问题:
 * char *p;
 * scanf("%d",&n);
 * p=malloc(n);
 * scanf("%c",&c);//注意在 scanf和 gets 中间使用 scanf("%c",&c),去除换行
 * gets(p);
 *
 * Input
 * 一个整型数和一个字符串，例如
 * 10
 * hello
 *
 * Output
 * 输出输入的字符串，上面输入的是hello，那么输出hello
 */

int main(){
    int n;//申请的空间大小
    scanf("%d",&n);
    char c;
    scanf("%c",&c);//清除标准输入缓冲区中的\n
    char *p;
    p = (char*)malloc(n);//这里需要进行强制类型转换，申请n个字节大小的空间
    gets(p);
    puts(p);
    return 0;
}