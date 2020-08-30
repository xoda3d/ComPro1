#include <stdio.h>

void main() {
  int x;
  scanf("%d", &x);
  if(x>0) {
    if(x==2 || x==3 || x==5 || x==7 || x==11) {
      printf("%d is prime", x);
    }else if(x%2!=0 && x%3!=0 && x%5!=0 && x%7!=0 && x%11!=0) {
      printf("%d is prime", x);
     }else {
      printf("%d is not prime", x);
     }
  }else {
    printf("");
  }
}
