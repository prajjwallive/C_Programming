/*
pattern 1a
A 
B B 
C C C 
D D D D 
E E E E E 
F F F F F F 

*/
#include <stdio.h>
int main() {
   int i, j;
   char input, alphabet = 'A';
   for (i = 1; i <= ('F' - 'A' + 1); ++i) {
      for (j = 1; j <= i; ++j) {
         printf("%c ", alphabet);
      }
      ++alphabet;
      printf("\n");
   }
   return 0;
}

/*
if you replace 'F' in line 15 with any alphabet like 'E' it will display the pattern as 

A 
B B 
C C C 
D D D D 
E E E E E 

*/
