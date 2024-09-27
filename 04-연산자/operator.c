#include <stdio.h>

int main() {
  // 1. 산술 연산자 예시
  int a = 10, b = 3;
  printf("산술 연산자:\n");
  printf("a + b = %d\n", a + b);  // 덧셈
  printf("a - b = %d\n", a - b);  // 뺄셈
  printf("a * b = %d\n", a * b);  // 곱셈
  printf("a / b = %d\n", a / b);  // 나눗셈
  printf("a %% b = %d\n", a % b); // 나머지 연산
  a++;                            // 증감 연산자 (후위)
  printf("a++ = %d\n", a);
  --b; // 증감 연산자 (전위)
  printf("--b = %d\n", b);

  // 2. 논리 연산자 예시
  int x = 1, y = 0;
  printf("\n논리 연산자:\n");
  printf("!x = %d\n", !x);         // NOT
  printf("x && y = %d\n", x && y); // AND
  printf("x || y = %d\n", x || y); // OR

  // 3. 비트 연산자 예시
  int p = 6, q = 3; // p = 110 (2진수), q = 011 (2진수)
  printf("\n비트 연산자:\n");
  printf("p & q = %d\n", p & q);   // 비트 AND (결과: 2)
  printf("p | q = %d\n", p | q);   // 비트 OR (결과: 7)
  printf("p ^ q = %d\n", p ^ q);   // 비트 XOR (결과: 5)
  printf("~p = %d\n", ~p);         // 비트 NOT (반전)
  printf("p << 1 = %d\n", p << 1); // 왼쪽 시프트 (결과: 12)
  printf("p >> 1 = %d\n", p >> 1); // 오른쪽 시프트 (결과: 3)

  // 4. 복합 할당 연산자 예시
  int r = 10;
  printf("\n복합 할당 연산자:\n");
  r += 5; // r = r + 5
  printf("r += 5 -> r = %d\n", r);
  r *= 2; // r = r * 2
  printf("r *= 2 -> r = %d\n", r);

  // 5. 기타 연산자 예시
  int num1 = 10, num2 = 20;
  printf("\n기타 연산자:\n");
  // 삼항 연산자
  int max = (num1 > num2) ? num1 : num2;
  printf("삼항 연산자 (num1 > num2 ? num1 : num2) -> max = %d\n", max);

  // sizeof 연산자
  printf("sizeof(int) = %lu bytes\n", sizeof(int));

  // 타입 변환 연산자
  float division = (float)num1 / num2;
  printf("타입 변환 연산자 (float)num1 / num2 = %.2f\n", division);

  return 0;
}
