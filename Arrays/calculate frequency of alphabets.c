#include <stdio.h>
int main()
{
char str[1000];
  gets(str);
  int str_len = strlen(str);
  int store_array[26];
  
  for(int i = 0; i < 26; i++){
  	store_array[i] = 0;
  }
  int offset = 0;
  for(int j = 0; j < str_len; j++){
    if(str[j] >= 'a' && str[j] <= 'z'){
    	offset = str[j] - 'a';
      	store_array[offset]++; // incrementing the store_array value at offset's index.
    }  	
  }
  
  for(int k = 0; k < 26; k++){
    if(store_array[k] != 0){
   printf("%c%d ", k + 'a',store_array[k]);
    }
  }
  
   return 0;
}
