#include <stdio.h>

int main(){
  int sum = 0;
  int counter;
  for ( counter = 999; counter > 0; counter--) {
    if(counter % 5 == 0 || counter % 3 == 0)
         sum += counter;
  }
  printf("%d\n", sum );
  return 0;
}
