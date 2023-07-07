#include <stdio.h>
int main() {
  int n;
  int count = 1;
  scanf("%d",&n);
   for(int i = 1; i <= n; i++)
   {
for(int j = 1; j <= n; j++)
        {
   	if(i%2 == 1)
            {
            	if(j != n)
                  printf("%d",count);
                
                  else
                    {
                  printf("%d",count+1);
                  count++;
                }
                  }
          else
          {
          	if(j == 1)
            {
            printf("%d",count+1);
              count++;
            }
            else
              printf("%d",count-1);
          }
        }
     printf("\n");
   }
	// Type your code here
	return 0;
}
