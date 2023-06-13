/*
    Cho mảng 1 chiều các số thực. Hãy viết hàm đệ quy sắp xếp các giá trị trong mảng tăng dần
*/
#include<stdio.h>
void swap(int *a, int *b) 
{
    float temp = *a;
    *a = *b;
    *b = temp;
}
int sapxep(int a[],int n)
{
    if(n == 1)
    {
        return 0;
    }else{
        sapxep(a, n-1);
        if(a[n-1] < a[n-2])
        {
            swap(&a[n-1],&a[n-2]);
            sapxep(a, n-1);
        }
    }
}
int main() {
    int a[5] = {5, 3, 1, 9, 7};
    sapxep(a, 5);
    printf("The sorted array is: ");
    for (int i = 0; i < 5; i++) {
        printf("%5d ", a[i]);
    }
    return 0;
}