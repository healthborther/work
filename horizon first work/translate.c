#include<stdio.h>
int main()
{
    char a, b;
    printf("请输入一个字符: ");
    scanf("%c", &a);
    if(a >= 'A' && a <= 'Z') {
        b = a + 32; 
    } else if(a >= 'a' && a <= 'z') {
        b = a - 32; 
    } else {
        printf("输入的字符不是字母。\n");
    }
    printf("转换后的字符是: %c\n", b);
    return 0;
}