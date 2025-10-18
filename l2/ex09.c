#include <stdio.h>

/**
 * @brief 練習問題3
 *
 * @return 0
 */
int main(void)
{
  char initial = 'M';
  int age = 42;
  double height = 164.5;

  printf("%cさんの年齢は%d歳、身長は%.1fcmです。", initial, age, height);

  return 0;
}
