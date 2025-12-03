#include <stdio.h>
#include <stdlib.h>

int binarySearch(int array[], int start, int end, int key);

int main(void)
{
    int data[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int size = 10;
    int key;
    int result;

    printf("Enter search key: ");
    scanf("%d", &key);

    result = binarySearch(data, 0, size - 1, key);

    if (result == -1)
        printf("Key not found.\n");
    else
        printf("Key found at index %d.\n", result);

    system("pause");
    return 0;
}

// 遞迴二元搜尋
int binarySearch(int array[], int start, int end, int key)
{
    // 如果起點 > 終點，表示找不到
    if (start > end)
        return -1;

    int mid = (start + end) / 2;

    // 如果找到
    if (array[mid] == key)
        return mid;

    // 搜尋左邊
    else if (key < array[mid])
        return binarySearch(array, start, mid - 1, key);

    // 搜尋右邊
    else
        return binarySearch(array, mid + 1, end, key);
}

