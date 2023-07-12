#include<stdio.h>
int main()
{
  int arr_size;
  scanf("%d ", &arr_size);
  int arr[arr_size];

  for( int idx = 0; idx < arr_size; idx++)
  { 
     scanf ("%d", &arr[idx]);
  } 

  partition(arr_size, arr);  // function call

  for( int idx = 0; idx < arr_size; idx++)
  { 
     printf ("%d  ", arr[idx]);
  }
  return 0;
}

void partition(int arr_size, int arr[])
{
  int zero_count = 0;
  int neg[arr_size];
  int neg_size = 0;
﻿  int pos[arr_size];
  int pos_size = 0;
  
  for (int idx = 0; idx < arr_size; idx++)
  {
    if (arr[idx] > 0)
    {
      pos[pos_size] = arr[idx];
      pos_size++;
    }
    else
    {
      neg[neg_size] = arr[idx];
      neg_size++;
    }
  }
  int arr_index = 0;

  for (int idx = 0; idx <= (neg_size - 1); idx++)
  {
    arr[arr_index] = neg[idx];
    arr_index++;
  }

  for (int idx = 0; idx <= (pos_size - 1); idx++)
  {
    arr[arr_index] = pos[idx];
    arr_index++;
  }
}
