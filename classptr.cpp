#include <iostream>
#include <stdio.h>

using namespace std;

class Record
{
    private:
        int bookno;
        string name;
        float price;
    public:
        void getd()
        {
            cout<<"Enter book number: ";
            cin>>bookno;
            cout<<"Enter book name: ";
            cin>>name;
        }
};

int main()
{
    Record rec, *cptr;
    rec.getd();
}