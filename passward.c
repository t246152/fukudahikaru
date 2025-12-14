#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    char password[100];
    int hasUpper = 0;
    int hasLower = 0;

    printf("パスワードを入力してください: ");
    scanf("%99s", password);

    // 文字数チェック
    if (strlen(password) < 8) {
        printf("改善点: 8文字以上にしてください。\n");
    }

    // 大文字・小文字チェック
    for (int i = 0; password[i] != '\0'; i++) {
        if (isupper(password[i])) {
            hasUpper = 1;
        }
        if (islower(password[i])) {
            hasLower = 1;
        }
    }

    if (!hasUpper) {
        printf("改善点: 大文字を含めてください。\n");
    }

    if (!hasLower) {
        printf("改善点: 小文字を含めてください。\n");
    }

    // 判定結果
    if (strlen(password) >= 8 && hasUpper && hasLower) {
        printf("このパスワードは強いパスワードです。\n");
    } else {
        printf("このパスワードは強いパスワードではありません。\n");
    }

    return 0;
}
