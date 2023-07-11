#include<stdio.h>

int p_rime(int n){
  int flag = 1;
  for(int j = 2; j <= n/2; j++){
    if(n % j == 0){
		flag = 0; 
      break;
    }
  }
  return flag;
}

int main(){
  int n, result;
  scanf("%d",&n);
  for(int i = 2; i < n; i++){
    result = p_rime(i);
    if(result == 1){
    printf("%d\n",i);
    }
  }
    return 0;
}
