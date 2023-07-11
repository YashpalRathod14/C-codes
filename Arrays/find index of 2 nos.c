#include<stdio.h>
int main()
{
 int in1,in2,arraysize;
  int res1,res2 = -1;
    int arr[arraysize];
scanf("%d",&arraysize);

  for(int i = 0; i <= arraysize - 1; i++){
 	 scanf("%d",&arr[i]);
  }
  scanf("%d %d", &in1,&in2);
  for(int i = 0; i <= arraysize - 1; i++)
  {
  	if(arr[i] == in1)
      res1 = i;
    if (arr[i] == in2)
      res2 = i;
  }
  printf("%d\n",res1);
  printf("%d\n",res2);
  
  return 0;
}
