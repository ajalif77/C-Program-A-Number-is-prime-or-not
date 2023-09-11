#include <stdio.h>

int main() {

  int x, i, num = 0;
  printf("Enter a number: ");
  scanf("%d", &x);


  if (x == 0 || x == 1)
    num = 1;

  for (i = 2; i <= x / 2; ++i) {


    if (x % i == 0) {
      num = 1;
      break;
    }
  }


  if (num == 0)
    printf("%d is a prime number.", x);
  else
    printf("%d is not a prime number.", x);

  return 0;
}
