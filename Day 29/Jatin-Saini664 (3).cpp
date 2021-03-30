#include<bits/stdc++.h>

using namespace std;

int countWords(string s){
    int words=0, i=0;
    while(i<s.size()){
        if(s[i]==' '){
            words++;
        }
        i++;
    }
    if(s[i-1]!=' ')
        words++;
    return words;
}

int main(){
    string s;
    getline(cin, s);
    cout<<countWords(s)<<" ";
}