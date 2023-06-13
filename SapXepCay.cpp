#include<iostream>
using namespace std;

void heapify(int a[], int n, int i)
{
    int l = 2*i + 1;
    int r = 2*i + 2;
    int lg = i;
    if(l < n && a[l] > a[lg]){
        lg = l;
    }
    if(r < n && a[r] > a[lg]){
        lg = r;
    }
    if(lg != i){
        swap(a[i], a[lg]);
        heapify(a, n, lg);
    }
}
void heapsort(int a[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        heapify(a, n, i);
    }
    for (int  i = n -1; i > 0; i--){
        swap(a[i], a[0]);
        heapify(a, i ,0);
    }
}
int main()
{
    int n = 6;
    int a[n] = {2, 5, 6, 1, 3, 4};
    heapsort(a, n);
    for (int i = 0; i < n; i++)
    {
        cout<< a[i] << " ";
    }
    return 0;
}