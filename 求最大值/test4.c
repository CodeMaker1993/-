#include <stdio.h>	
int main()
{
    int a=  1;
    int b = 12;
    int c = 14;
    int d = 21;
    int e = 17;
    int f = 15;
    int g = 16;
    int h = 11;
    int i = 13;
    int g = 6;
    a = (a > b ? a : b);
    a = (a > c ? a : c);
    a = (a > d ? a : d);
    a = (a > e ? a : e);
    a = (a > f ? a : f);
    a = (a > g ? a : g);
    a = (a > h ? a : h);
    a = (a > i? a : i);
    a = (a > g ? a : g);
    printf("最大值是%d\n",a);
    return 0;
}