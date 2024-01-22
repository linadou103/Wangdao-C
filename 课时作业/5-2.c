#include <stdio.h>
#include <string.h>
/*
 * Description
 * 读取一个字符串，字符串可能含有空格，将字符串逆转，
 * 原来的字符串与逆转后字符串相同，输出0，原字符串小于逆转后字符串输出-1，大于逆转后字符串输出1
 * 例如输入hello，逆转后的字符串为olleh，因为hello小于olleh，所以输出-1
 *
 *
 * Input
 * 输入一个字符串，例如hello，当然输入的字符串也可能是how are you,含有空格的字符串
 *
 * Output
 * 输出是一个整型数，如果输入的字符串是hello，那么输出的整型数为-1
 */

int main(){
    char a[100],b[100];
    int i,j;
    gets(a);
    for(i=strlen(a)-1,j=0;i>=0;i--,j++){
        b[j]=a[i];
    }
    b[j]='\0';//字符串结尾需要设置最后一个字符是'\0',不然会导致程序出错。 C 语言中，所有字符串都必须以 '\0' 结尾，这样计算机才知道字符串在哪里结束。
    int result = strcmp(a,b);//strcmp 函数用于比较两个字符串，并返回一个整数，表示两个字符串的比较结果。
    if (result < 0){
        printf("%d\n",-1);
    }
    else if (result = 0){
        printf("%d\n",0);
    }
    else{
        printf("%d\n",1);
    }
    return 0;
}