#include <stdio.h>
void reverse(int arr[], int);
int main()
{
  int n;
  printf("\nEnter size of array: ");
  scanf("%d", &n);
  int arr[n];
  printf("\nEnter %d elements: ", n);
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  reverse(arr, n);
  printf("\nArray with reverse elements: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }
}
void reverse(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    int a = arr[i], rev = 0, rem;
    while (a != 0)
    {
      rem = a % 10;
      rev = (rev * 10) + rem;
      a /= 10;
    }
    arr[i] = rev;
  }
}