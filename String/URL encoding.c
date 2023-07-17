#include<stdio.h>
#include<string.h>

int main()
{
  char str[100];
  scanf("%[^\n]s", str);
  int len = strlen(str);
  char tmp[3 * len - 1];
  int index2 = 0;
  for(int index1 = 0; index1 < len; index1++){  
    if(str[index1] != ' ')
    {
      tmp[index2] = str[index1];
      index2++;
       
    }
    else{
      tmp[index2 + 0] = '%';
      tmp[index2 + 1] = '2';
      tmp[index2 + 2] = '0';
      index2 = index2 + 3;
    }
     
  }
  tmp[index2] = '\0';
  //printf("%s", tmp);
  for(int i = 0; i < tmp[i] != '\0'; i++){
    str[i] = tmp[i];
  }
  printf("%s", str);
  return 0;
}
