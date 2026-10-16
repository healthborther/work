#include<stdio.h>
int main()
{
    double a, b;
    double quotient;
    printf("请输入两个小数: ");
    scanf("%lf %lf", &a, &b);
    quotient = a / b;
    printf("两数之商为: %.3lf\n", quotient);
    return 0;
}