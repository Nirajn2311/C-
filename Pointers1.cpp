#include <iostream>
#include <stdio.h>

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
    std::cout<<p;
    std::cout<<"\n"<<q;
    std::cout<<"\n"<<r;
    std::cout<<"\n"<<s;
    getchar();
    return 0;
}