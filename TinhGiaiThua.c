/* Tính T(n) = 1 x 2 x 3 x … x n */
 #include<stdio.h>
int giaithua(int n)
{
    if(n == 1)
    {
        return 1;
    } 
    return n*giaithua(n-1);
}
int main()
{
    int n = 5;
    printf(" Tinh giai thua: %d",giaithua(n));
}


