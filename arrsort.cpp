#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int ar[50], tmp, siz;
    cout << "Enter size of array(max 50): ";
    cin >> siz;
    cout << "Enter the elemnts of the array:\n";
    for (int i = 0; i < siz; i++)
    {
        cin >> ar[i];
    }
    for (int i = 0; i < siz; i++)
    {

        for (int j = i; j < siz; j++)
        {
            if (ar[i] > ar[j])
            {
                tmp = ar[i];
                ar[i] = ar[j];
                ar[j] = tmp;
            }
        }
        cout << "\nArray after pass " << i + 1 << ": ";
        for (int i = 0; i < siz; i++)
        {
            cout << ar[i] << " ";
        }
    }
}