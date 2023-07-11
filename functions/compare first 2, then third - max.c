#include <stdio.h>
int compare(int a, int b){
int result;
  if(a > b)
    result = a;
  else
    result = b;
  return result;
}
int main(){
  int a,b,c,max1;
  scanf("%d %d %d",&a,&b,&c);
  max1 = compare(a,b);
  printf("%d",compare(max1,c));
  	return 0;
}
