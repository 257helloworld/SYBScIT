/* Write a program to implement merge sort */
#include <iostream>
using namespace std;
void mergesort(int a[], int i, int j);
void merge(int a[], int i1, int j1, int i2, int j2);
int main()
{
    cout << "--------Merge Sort--------";
    int a[20], n, i;
    cout << "\nEnter the size of an array: ";
    cin >> n;
    cout << "\nEnter array elements: \n";
    for (i = 0; i < n; i++)
    {
        cout << i+1 << ": ";
        cin >> a[i];
    }
    mergesort(a, 0, n - 1);
    cout << "\nSorted Array is: ";
    for (i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n";
}
void mergesort(int a[], int i, int j)
{
    int mid;
    if (i < j)
    {
        mid = (i + j) / 2;
        mergesort(a, i, mid);
        mergesort(a, mid + 1, j);
        merge(a, i, mid, mid + 1, j);
    }
}
void merge(int a[], int i1, int j1, int i2, int j2)
{
    int temp[40];
    int i, j, k;
    i = i1;
    j = i2;
    k = 0;
    while (i <= j1 && j <= j2)
    {
        if (a[i] < a[j])
            temp[k++] = a[i++];
        else
            temp[k++] = a[j++];
    }
    while (i <= j1)
    {
        temp[k++] = a[i++];
    }
    while (j <= j2)
    {
        temp[k++] = a[j++];
    }
    for (i = i1, j = 0; i <= j2; i++, j++)
    {
        a[i] = temp[j];
    }
}