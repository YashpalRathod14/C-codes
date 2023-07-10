#include<stdio.h>

int sum(int n){
 return n * (n + 1) / 2; 
}

int main() {
	int n;
  scanf("%d",&n);
  int ans = sum(n);
  printf("%d",ans);
  return 0;
}
