
#include <stdio.h>
#include <stdlib.h>

int get_unmatched_char_count(char name_1[], char name_2[]);

int main() 
{
  char name_1[100], name_2[100];
  //Get 1 boy's name and 1 girl's name
  scanf("%s", name_1);
  scanf("%s", name_2);
   
  int i,j, k=0, unmatched_char_count;
  unmatched_char_count=get_unmatched_char_count(name_1, name_2);
  printf("%d",unmatched_char_count);
   
   return 0;
}
 
int get_unmatched_char_count(char name_1[], char name_2[]) {
    int i,j;
  //Compare each characters of these names and assign "*"
  //in which both names had same character
  for(i=0; name_1[i]; i++) {
    for(j=0; name_2[j]; j++) {
      if(name_1[i] == name_2[j]) {
        name_1[i] = '$';
        name_2[j] = '$';
        break;
      }
    }
  }
  //Count the characters except "$".
  //So that we can get unique characters in both the names
  int unmatched_char_count = 0;
  for(i=0; name_1[i]; i++) {
    if(name_1[i] != '$') 
    {
      unmatched_char_count++;
    }
  }
   
  for(j=0; name_2[j]; j++) {
    if(name_2[j] != '$') 
    {
      unmatched_char_count++;
    }
  }
   
  return unmatched_char_count;
}
