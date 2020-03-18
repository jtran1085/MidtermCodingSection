#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void count() {
 printf("Enter lines of text here:\n");
 int c=0;
 int nl=0;
 int nc=0;
 int nt=0;
 int nbackslash = 0;

 while ((c = fgetc(stdin)) != EOF && c!= '\0') {
 if (c == '\n') { ++nl;
 } if (c == '\t') { ++nt;
 } if (c == '\\') { ++nbackslash;
 } if (isalnum(c)) { ++nc; }
 printf("lines: %d\n", nl);
 printf("tabs: %d\n", nt);
 printf("backslashes: %d\n", nbackslash);
 printf("alphanumeric: %d\n", nc);
  }
}
int main(int argc, const char* argv[]) {
 count();
 return 0;
} 
