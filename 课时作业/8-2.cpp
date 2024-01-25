#include <stdio.h>
#include <stdlib.h>
/*
 * Description
 * 使用C++的引用；在主函数定义字符指针 char*p,然后在子函数内malloc申请空间
 * 通过fgets读取字符串，然后再主函数中进行输出
 * 要求子函数使用C++的引用，注意在C++中标准输入读取字符串，需要使用fgets(p,100,stdin)
 *
 * Input
 * 输入一个字符串，例如 I love C language
 *
 * Output
 * 如果输入的是I love C language，那么输出也是I love C language
 */

//&是取地址运算符，*(地址)是取值运算符
// int *p=&a; 相当于int *p; p=&a;
//p：指针变量名。在定义指针变量时，需要指定指针所指向变量的数据类型。例如，int *p; 定义了一个指向int类型变量的指针变量p。
//*p：它用于访问指针所指向的变量的值。例如，*p = 10; 将10赋值给p所指向的变量。
//&p：它用于获取指针变量p的地址。例如，int *p; int **pp = &p;定义了一个指向指针变量p的指针变量pp。
//*&p：等价于p。它首先将p取地址，然后再将其解引用，得到p本身的值。
//&*p：等价于p。它首先将p解引用，得到p所指向的变量的值，然后再将其取地址，得到p本身的地址。

void point(char*&p){
    p = (char*)malloc(100);
    fgets(p,100,stdin);
}
int main(){
    char*p = NULL;//分配一块内存，名字是p，内存中存放的是一个指向char型数据的地址，但是这个地址目前是NULL
    point(p);
    puts(p);
    free(p);//记得释放指针
    return 0;
}

