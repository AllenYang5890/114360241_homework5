#include <stdio.h>
#include <stdlib.h>

void stringReverse(const char *s);

int main(void)
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Reversed string: ");
    stringReverse(str);

    printf("\n");
    system("pause");
    return 0;
}

// 遞迴反向印字串
void stringReverse(const char *s)
{
    // 遇到字串結尾 → 停止遞迴
    if (*s == '\0')
        return;

    // 先處理下一個字元
    stringReverse(s + 1);

    // 再印出現在的字
    putchar(*s);
}

