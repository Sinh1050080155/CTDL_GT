#include<stdio.h>

void insertionSort(int a[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = a[i];
       j = i-1;
  
      
       while (j >= 0 && a[j] > key)
       {
           a[j+1] = a[j];
           j--;
       }
       a[j+1] = key;
   }
}

int main()
{
    
    int a[] = {15, 55, 23, 1, 5, 13};
    int n = sizeof(a) / sizeof(0);
    insertionSort(a, n);
    for (int i = 0; i < n; i++)
    {
        printf("%5d",a[i]);
    }
    
}