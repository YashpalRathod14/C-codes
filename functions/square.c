#include<stdio.h>

int square(int n) {
  return n * n;
}

int main() {

  int n;
  scanf("%d",&n);
  int ans = square(n);
  printf("%d",ans);
   return 0;
}
