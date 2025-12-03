#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int freq[13] = {0};   // 頻率陣列，index 2~12 代表點數和
    int roll;             // 擲骰次數計數
    int die1, die2;       // 兩顆骰子的點數
    int sum;              // 兩顆骰子點數總和

    srand(time(NULL));    // 設定亂數種子

    // 1. 擲兩顆骰子 36000 次
    for (roll = 1; roll <= 36000; roll++)
    {
        die1 = 1 + rand() % 6;   // 第一顆骰子：1~6
        die2 = 1 + rand() % 6;   // 第二顆骰子：1~6
        sum  = die1 + die2;      // 總和：2~12

        ++freq[sum];             // 總和為 sum 的次數 +1
    }

    // 2. 以表列的方式印出結果
    printf("Sum\tFrequency\n");
    for (sum = 2; sum <= 12; sum++)
    {
        printf("%2d\t%6d\n", sum, freq[sum]);
    }

    system("pause");
    return 0;
}

