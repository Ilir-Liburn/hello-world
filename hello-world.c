#include <stdio.h>
int main() {
  extern a, b, c;
  putchar(a); putchar(b); putchar(c); putchar('!*n');
  return 0;
}

a 'Hell';
b 'o, W';
c 'orld';
