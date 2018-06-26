#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n, ar[50];
    void arsort(int a[], int size);
    cout << "How many numbers do you want to enter: ";
    cin >> n;
    cout << "Enter the numbers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    arsort(ar, n);
    cout << "\nYour sorted array is:\n";
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }
    return 0;
}

void arsort(int a[], int size)
{
    int t;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            if (a[j] < a[i])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
        cout << "\nYour array after step " << i + 1 << ":\n";
        for (int k = 0; k < size; k++)
        {
            cout << a[k] << " ";
        }
    }
}