#include <stdio.h>

char* a = "Hell";
char* b = "o Wo";
char* c = "rld!";

int main() {
  fputs(a, stdout); fputs(b, stdout); puts(c);
  return 0;
}
