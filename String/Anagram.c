#include <stdio.h>
#include <string.h>
 
int main()
{ 
 char str1[1000];
 gets(str1);
 char str2[1000];
 gets(str2);
 int string1_len = strlen(str1);
 int string2_len = strlen(str2);
 int stat[26];
  
 for (int idx = 0; idx <= 25; idx++)
 {
   stat[idx] = 0;
 }
  
 for (int idx = 0; idx <= string1_len; idx++)
 {
   if(str1[idx] >= 'a' && str1[idx] <= 'z')
   {
     int offset = str1[idx] - 'a';
     stat[offset]++;
   }
    
   else if(str1[idx] >= 'A' && str1[idx] <= 'Z')
   {
     int offset = str1[idx] - 'A';
     stat[offset]++;
   }
 }
  
  for (int idx = 0; idx <= string2_len; idx++)
 {
   if(str2[idx] >= 'a' && str2[idx] <= 'z')
   {
     int offset = str2[idx] - 'a';
     stat[offset]--;
   }
    
   else if(str2[idx] >= 'A' && str2[idx] <= 'Z')
   {
     int offset = str2[idx] - 'A';
     stat[offset]--;
   }
 }
  
 int is_same = 0;
 for (int idx = 0; idx <= 25; idx++)
 {
   if((stat[idx] == 1)||(stat[idx] == -1))
   {
     is_same = 1;
     break;
   }
 }
 if (is_same == 0)
   printf("Anagram");
 else
   printf("Not an Anagram");
   
 return 0;
}
  
