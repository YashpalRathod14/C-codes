#include <stdio.h>
int min(int a, int b){
int result;
  if(a < b)
    result = a;
  else
    result = b;
  return result;
}
int gcd(int a, int b){
  int min1,result;
    min1 = min(a,b);
  
  for(int i = 2; i <= min1; i++)
  {
  	if(a % i == 0 && b % i == 0){
    	result = i;
    }
  }
  return result;
}
int main() {
	int a,b,c,gcd1;
  scanf("%d %d %d",&a,&b,&c);
  gcd1 = gcd(a,b);
  printf("%d",gcd(gcd1,c));
	return 0;
}
