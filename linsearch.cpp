#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int Lsearch(int ar[], int n, int size);
    int ar[50], n, size, index;
    cout << "Enter size of array(max 50): ";
    cin >> size;
    cout << "Enter the elements:\n";
    for (int i = 0; i < size; i++)
    {
        cin >> ar[i];
    }
    cout << "Enter element you want to find: ";
    cin >> n;
    index = Lsearch(ar, n, size);
    if (index == -1)
    {
        cout << "The given element is not found in the array.";
    }
    else
    {
        cout << n << " is found at position " << index + 1;
    }
}

int Lsearch(int ar[], int n, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (ar[i] == n)
        {
            return i;
        }
    }
    return -1;
}