#include<stdio.h>
int main()
{
  int size;
    scanf("%d", &size);
    
    // Get the array elements
    int arr[size], i;
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
  
  	for(int i = 0; i < size; i++){
      for(int j = i + 1; j <size; j++){
        for(int k = j + 1; k <size; k++){
          printf("(%d, %d, %d) ",arr[i],arr[j],arr[k]);
        }
      }
      printf("\n");
    }
  return 0;
}
