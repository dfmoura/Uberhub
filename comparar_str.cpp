#include <bits/stdc++.h>
using namespace std;


int main(){

    string str, vogal,a,d;
    cin>>str;

    for(int i = 0; i<str.length();i++){
        char c = tolower(str[i]); // converta em minusculo o caracter
        if ((c == 'a') || (c=='e') || (c == 'i') || (c == 'o') || (c == 'u')){
            vogal +=c;
        }
    }
    cout<<vogal<<endl;
    d.append((vogal.length()),vogal.at(0));
    if(d==vogal){cout<<"S"<<endl;}else{cout<<"N"<<endl;}
    
    
}