#include<stdio.h>
int main()
{
  int arraysize;
  int max = 0;
  int arr[arraysize];
scanf("%d",&arraysize);

  for(int i = 0; i <= arraysize - 1; i++){
 	 scanf("%d",&arr[i]);
  }
  
   for(int i = 0; i <= arraysize - 1; i++){
   	if(max < arr[i])
      max = arr[i];
     else
       max = max;
   }
  printf("%d",max);
  return 0;
}
