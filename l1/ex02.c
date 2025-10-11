#include <stdio.h>

/**
 * @brief キーボードから年齢読み取って、
 * 5年後の年齢を表示するプログラム
 *
 * @return 0
 */
int main(void) {
  int age;

  printf("今何歳ですか? > ");
  scanf("%d", &age);

  printf("5年後には%d歳です。\n", age + 5);

  return 0;
}
