#include <iostream>
#include <stdio.h>

using namespace std;

class Stud
{
    int rno;
    string name;

  public:
    void getd()
    {
        cout << "\nEnter roll number: ";
        cin >> rno;
        cout << "Enter name: ";
        cin >> name;
    }
    void showd()
    {
        cout << "\nRoll number: " << rno << "\nName: " << name;
    }
};

int main()
{
    int n;
    Stud s[50];
    cout << "Enter number of data to be entered(not more than 50): ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        s[i].getd();
    }
    cout << "\nTABLE 1";
    for (int i = 0; i < n; i++)
    {
        s[i].showd();
    }
    return 0;
}