#include <stdio.h>
#include <wchar.h>

#define EXIT_SUCCESS 1

int main(int argc, char *argv[]) {
  // integer

  unsigned int a = 0xffffffff;
  int b = 0xffffffff;

  printf("unsigned : %u\nsigned : %d\n", a, b);

  // float

  float f1 = 77777777;
  float f2 = 77777778;
  float f3 = 77777779;

  printf("%f, %f, %f\n", f1, f2, f3);

  // char

  char ch = 'A';
  printf("%c\n", ch);

  wchar_t uni = L'각';
  wprintf(L"%c\n", uni);

  // string

  char str[3] = "abc";
  char str2[3];

  str2[0] = 'a';
  str2[1] = 'b';
  str2[2] = 'c';

  printf("%s\n", str);
  printf("%s\n", str2);

  return EXIT_SUCCESS;
}
