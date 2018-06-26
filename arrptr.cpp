#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

struct Employee
{
    int empno;
    string name;
    int basic;
    int experience;
};

void increase(Employee *emp);
void display(Employee *emp);

int main()
{
    Employee mgr, *eptr;
    cout << "Enter employee number: ";
    cin >> mgr.empno;
    cout << "Enter employee name: ";
    cin >> mgr.name;
    cout << "Enter basic salary: ";
    cin >> mgr.basic;
    cout << "Enter experience: ";
    cin >> mgr.experience;
    eptr = &mgr;
    increase(eptr);
    display(eptr);
}

void increase(Employee *emp)
{
    if (emp->experience >= 20)
    {
        emp->basic += 200;
    }
}

void display(Employee *emp)
{
    cout << "\nEmployee number: " << emp->empno;
    cout << "\nEmployee name: " << emp->name;
    cout << "\nEmployee basic salary: " << emp->basic;
    cout << "\nEmployee experience: " << emp->experience;
}