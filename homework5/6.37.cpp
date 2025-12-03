#include <stdio.h>
#include <stdlib.h>

int recursiveMaximum(int array[], int size);

int main(void)
{
    int a[] = {3, 9, 2, 7, 5, 8};
    int size = 6;

    printf("The maximum value is %d\n", recursiveMaximum(a, size));

    system("pause");
    return 0;
}

// 遞迴找最大值
int recursiveMaximum(int array[], int size)
{
    // 終止條件：只剩一個元素 → 最大就是它
    if (size == 1)
        return array[0];

    // 找前 size-1 個元素的最大值
    int maxOfRest = recursiveMaximum(array, size - 1);

    // 回傳比較大的那個
    return (array[size - 1] > maxOfRest) ? array[size - 1] : maxOfRest;
}

