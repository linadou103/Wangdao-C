#include <stdio.h>
/*
 * Description
 * 某人想将手中的一张面值100元的人民币换成10元、5元、2元和1元面值的票子。要求换正好40张，且每张票子至少一张。问：有几种换法？
 *
 * Input
 * 无输入
 *
 * Output
 * 一个数，表示共有多少种换法
 */

int main(){
    //四种类型钞票：1 2 5 10
    int a,b,c,d,total=0;
    for (d=1;d<=10;d++){
        for (c=1;c<=18;c++){
            for (b=1;b<=37;b++){
                for (a=1;a<=37;a++){
                    if (a+b+c+d == 40 && a+b*2+c*5+d*10 == 100)
                        total++;//+1
                }
            }
        }
    }
    printf("%d\n",total);
    return 0;
}