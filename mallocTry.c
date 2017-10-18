#include<stdio.h>
#include<stdlib.h>
int main()
{
  printf("Enter no. of elements ");
  int count, sum = 0, i;
  scanf("%d", &count);
  int *arr = (int*) malloc (sizeof(int)*count);
  //we have used sizeof(int) because malloc creates the block of size we want and in this case int tkes 2 bytes*size we want
  for(i = 0; i < count; i++)
  {
    arr[i] = i;
    sum += arr[i];
  }
  printf("Array Sum:%d ", sum);
  return 0;
}
