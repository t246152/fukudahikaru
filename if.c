#include <stdio.h>

int main(void)
{
    char a,b;
    printf("二つの数字を入力してください>>>");
    
    scanf("%c%c", &a, &b);
    
    if(a > b)
    {
        printf("一つ目に入力した数字のほうが大きいです");
    }
    if(b > a)
    {
        printf("二つ目に入力した数字のほうが大きいです");
    }
    if(a = b)
    {
        printf("入力した数字は同じです");
    }  

    return 0;
}