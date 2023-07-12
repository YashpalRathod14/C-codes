#include<stdio.h>
int main()
{
int n,k;
  int sum = 0;
  int sum1 = 0;
  scanf("%d",&n);
  int arr[n];
  
  for(int i = 0; i < n; i++)
    {
      scanf("%d",&arr[i]);
    }
  
  for(int j = 0; j < n/2; j++)
    {
		sum = sum + arr[j];
    }
    for(k = n/2; k <n; k++)
    {
		sum1 = sum1 + arr[k];
    }
  if(sum == sum1){
  printf("Perfect Batch");
  }
  else
  {
  printf("Not a Perfect Batch");
  }
  return 0;
}
