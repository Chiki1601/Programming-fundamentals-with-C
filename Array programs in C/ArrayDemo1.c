#include <stdio.h>

void main()
{
  int arr[5] = {10,20,30,40,50};
  int i;
  
  printf("Content of array is : \n");
  
  for(i=0;i<=5;i++)
  {
      printf("Value at arr[%d] is %d \n",i,arr[i]);
  }
}
