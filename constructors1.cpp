#include <iostream>
#include <stdio.h>

using namespace std;

class Stud
{
    int rno;
    string name;
    int marks[5];

  public:
    void getd()
    {
        cout << "\nEnter roll number: ";
        cin >> rno;
        cout << "Enter name: ";
        cin >> name;
        for (int i = 0; i < 5; i++)
        {
            cout << "Enter marks for subject " << i + 1 << " :";
            cin >> marks[i];
        }
    }
    void showd()
    {
        cout << "\nRoll number: " << rno;
        cout << "\nName: " << name;
        for (int i = 0; i < 5; i++)
        {
            cout << "\nMarks for subject " << i + 1 << " :" << marks[i];
        }
    }
};

int main()
{
    int n;
    cout << "\nEnter number of data to be entered: ";
    cin >> n;
    Stud s[n];
    for (int i = 0; i < n; i++)
    {
        s[i].getd();
    }

    for (int i = 0; i < n; i++)
    {
        s[i].showd();
    }
}