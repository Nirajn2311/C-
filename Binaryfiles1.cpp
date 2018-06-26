#include <iostream>
#include <fstream>

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
    int rno, n;
    string name;
    cout << "Enter number of records to be entered: ";
    cin >> n;
    Stud s[50];
    ofstream fout;
    fout.open("student.dat", ios::out);

    for (int i = 0; i < n; i++)
    {
        s[i].getd();
        fout.write((char *)&s[i], sizeof(s[i]));
    }

    fout.close();

    ifstream fin;
    fin.open("student.dat", ios::in);

    for (int i = 0; i < n; i++)
    {
        fin.read((char *)&s[i], sizeof(s[i]));
        s[i].showd();
    }

    fin.close();
    getchar();
    return 0;
}
