#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int Bsearch(int ar[], int size, int n);
    int ar[50], index, n, siz;
    cout << "Enter size of array(max 50): ";
    cin >> siz;
    cout << "Enter elemenst for array:\n";
    for (int i = 0; i < siz; i++)
    {
        cin >> ar[i];
    }
    cout << "Enter number to search for: ";
    cin >> n;
    index = Bsearch(ar, siz, n);
    if(index == -1)
    {
        cout<<"Element not found in array.";
    }
    else
    {
        cout << n << " is found at index " << index + 1;
    }
}

int Bsearch(int ar[], int siz, int n)
{
    int beg = 0, end = siz, mid;
    while (beg <= end)
    {
        mid = (beg + end) / 2;
        if (ar[mid] == n)
        {
            return mid;
        }
        else if (ar[mid] < n)
        {
            beg = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }
    return -1;
}