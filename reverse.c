#include <stdio.h>

int countodd(int a[], int n);
void reverse(int a[], int n);
void printarr(int a[], int n);

int main()
{
    int x, a[] = {1, 2, 3, 4, 5, 6, 7, 9}; 

    reverse(a, 8);
    printarr(a, 8);

    return 0;
}

    void printarr(int a[], int n)
    {
        for (int i=0; i<n; i++)
        {
            printf("%d\t", a[i]);
        }
        printf("\n");
    }

    void reverse(int a[], int n)
    {
        for(int i=0; i<n/2; i++)
        {
            int firstval = a[i];
            int secondval = a[n-i-1];
            a[i] = secondval;
            a[n-i-1];
        }
    }

    int countodd(int a[], int n) 
    {
        int count = 0;
        for(int i=0; i<n; i++) 
        {
            if(a[i] % 2 !=0) 
            {
                count++;
            }
        }
        return count;
    }