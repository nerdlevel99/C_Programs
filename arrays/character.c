#include <stdio.h>
#include <conio.h> // for getch() function on Windows

int main() {
   int i;
   printf("ASCII Chart\n");
   for (i = 0; i < 128; i++) {
      printf("%d  %x  %c\n", i, i, i);
      getch(); // wait for user input
   }
   return 0;
}
