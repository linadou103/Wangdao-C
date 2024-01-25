#include <stdio.h>
/*
 * Description
 * 输入一个学生的学号、姓名、性别，用结构体存储，通过scanf读取后，然后再通过print打印输出
 *
 * Input
 * 学号、姓名、性别，例如输入 101 xiongda m
 *
 * Output
 * 输入和输出的内容一致，如果输入的是 101 xiongda m，那么输出也是 101 xiongda m
 */

//struct--定义结构体，student--结构体标签，struct student--声明一个结构体类型
struct student{
    int num;//学号
    char name[50];//姓名
    char sex;//性别
}s;//这里";"不能丢,可以在创建的时候定义变量，下面直接使用
int main(){
//    struct student s;
    scanf("%d%s %c",&s.num,s.name,&s.sex);//数组名是一个特殊的指针常量，它存储的是数组的首元素的地址
    printf("%d %s %c",s.num,s.name,s.sex);
    return 0;
}