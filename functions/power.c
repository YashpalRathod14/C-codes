#include<stdio.h>

int p_function(int power, int base){
    int result = 1;
	for(int i = 1; i <= power; i++){
    result = result * base;
    }
  return result;
}

int main(){
int power, base;
  scanf("%d %d",&base,&power);
  printf("%d", p_function(power,base));
  	return 0;
}
