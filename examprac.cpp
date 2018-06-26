#include <iostream>
#include<string.h>
#include<ctype.h>

using namespace std;

void convert(char str[],int len)
{
    for(int count = 0;count<len;count++)
    {
        if(isupper(str[count]))
        {
            str[count]=tolower(str[count]);
        }
        else if(islower(str[count]))
        {
            str[count]=toupper(str[count]);
        }
        else if(isdigit(str[count]))
        {
            str[count]=str[count]+2;
        }
        else
        {
            str[count] = '#';
        }
    }
}

int main()
{
    char text[] = "AISSCE 2008@";
    int size = strlen(text);
    convert(text,size);
    cout<<text<<endl;
    for(int c=0,r = size-1;c<=size/2;c++,r--)
    {
        char temp = text[c];
        text[c] = text[r];
        text[r] = temp;
    }
    cout<<text<<endl;
}