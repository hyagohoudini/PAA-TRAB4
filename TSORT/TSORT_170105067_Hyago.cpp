#include <iostream>

using namespace std;

void quickSort(int *a, int left, int right)
{
  int i, j, x, y;

  i = left;
  j = right;
  x = a[(left + right) / 2];

  while (i <= j)
  {
    while (a[i] < x && i < right)
    {
      i++;
    }
    while (a[j] > x && j > left)
    {
      j--;
    }
    if (i <= j)
    {
      y = a[i];
      a[i] = a[j];
      a[j] = y;
      i++;
      j--;
    }
  }

  if (j > left)
  {
    quickSort(a, left, j);
  }
  if (i < right)
  {
    quickSort(a, i, right);
  }
}

void printArray(int myarray[], int num)
{
  for (int i = 0; i < num; i++)
  {
    cout << myarray[i];
    if (i < num - 1)
    {
      cout << " ";
    }
  }
}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }
  quickSort(arr, 0, n - 1);
  printArray(arr, n);
  return 0;
}
