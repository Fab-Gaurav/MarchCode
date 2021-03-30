#include<iostream>
using namespace std;

int count_words(string s)
{
     int c=0;
     for (int i=0; s[i]!='\0'; i++)
     {
         if(s[i]==' ')
            c+=1;
     }
     return (c+1);
}

int main()
{
    string s;
    int count_w;
    cout<<"enter any string: ";
    getline(cin,s);
    count_w=count_words(s);
    cout<<"No. of words in string are: "<<count_w;
    return 0;
}
