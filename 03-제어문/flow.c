#include <stdio.h>

int main() {
  // 조건문 예시
  int number = 5;

  // if, else if, else 문 예시
  if (number > 10) {
    printf("Number is greater than 10.\n");
  } else if (number == 5) {
    printf("Number is exactly 5.\n");
  } else {
    printf("Number is less than 5.\n");
  }

  // switch 문 예시
  switch (number) {
  case 1:
    printf("Number is 1.\n");
    break;
  case 5:
    printf("Number is 5.\n");
    break;
  case 10:
    printf("Number is 10.\n");
    break;
  default:
    printf("Number is neither 1, 5, nor 10.\n");
    break;
  }

  // 반복문 예시
  // for 문 예시: 1부터 5까지 출력
  printf("For loop example:\n");
  for (int i = 1; i <= 5; i++) {
    printf("%d ", i);
  }
  printf("\n");

  // while 문 예시: 1부터 5까지 출력
  printf("While loop example:\n");
  int i = 1;
  while (i <= 5) {
    printf("%d ", i);
    i++;
  }
  printf("\n");

  // do-while 문 예시: 1부터 5까지 출력
  printf("Do-while loop example:\n");
  i = 1;
  do {
    printf("%d ", i);
    i++;
  } while (i <= 5);
  printf("\n");

  return 0;
}
