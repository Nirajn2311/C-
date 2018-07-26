#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    char a = '1',b = 'a';
    float c = 1,d = 2;
    float *r, *s;
    char *p, *q;
    p = &a;
    q = &b;
    r = &c;
    s = &d;
    cout<<p;
    cout<<"\n"<<q;
    cout<<"\n"<<r;
    cout<<"\n"<<s;
    return 0;
}