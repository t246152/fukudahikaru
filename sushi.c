/**文字を表記するためにプログラム**/

#include <stdio.h>

int main()
{
    /**名前をつけて名前を保存しとく**/
    int sushi = 100000;
    /**printfは""の間に表記したい文字を書くよ**/
    printf("寿司が%d皿あります！\n", sushi);

    sushi = sushi/2;
    printf("ごめんなさい！ほんとは%d皿でした！", sushi);
  
    return 0;
}