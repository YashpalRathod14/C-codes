#include <stdio.h>
int main()
{
  int n;
 scanf("%d",&n);
  int arr[n];
  
  for(int i = 0; i < n; i++)
    {
      scanf("%d",&arr[i]);
    }
  int max = arr[0];
  int index = 0;
  
for(int j = 0; j < n; j++)
{
	if(max < arr[j])
    {
    max = arr[j];
      index = j;
    }
}
  printf("%d",index);
   return 0;
}
