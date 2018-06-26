#include<iostream>
#include<fstream>
#include<stdio.h>

using namespace std;

int main()
{
    int rno,n;
    string name;
    cout<<"Enter number of records to be entered: ";
    cin>>n;
    ofstream fout;
    fout.open("stud.txt", ios::out);
    
    for(int i = 0; i < 2; i++)
    {
        cout<<"\nEnter roll number: ";
        cin>>rno;
        cout<<"Enter name: ";
        cin>>name;
        fout<<rno<<endl
        fout<<name<<endl;
    }
    fout.close();
    ifstream fin;
    fin.open("stud.txt", ios::in);
    for(int i = 0; i < 2; i++)
    {
        fin>>rno;
        fin>>name;
        cout<<"\nRoll number: "<<rno<<"\nName: "<<name;
    }
    fin.close();
    getchar();
    return 0;
}