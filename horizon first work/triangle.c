#include <stdio.h>

int main(void)
{
    int n;
    int i, j;

    printf("请输入行数: ");
    scanf("%d", &n);

    if (n > 1 && n <51)
    {
        for (i = 1; i <= n; i++) {
            for (j = 0; j < n - i; j++) {
                printf(" ");            
            }
            for (j = 0; j < 2 * i - 1; j++) {
                printf("*");            
            }
            printf("\n");             
        }
    }else{
        printf("输入的行数不在范围内，请输入1-50之间的整数。\n");
    }
    return 0;
}