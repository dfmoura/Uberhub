#include <bits/stdc++.h>
using namespace std;

// funcao para ler uma string

string lerStr(){
    string str;
    getline(cin,str);
    return str;
}

int main(){

    cout<<"Digite um texto: "<<endl;
    string str = lerStr();
    cout<< "O texto digitado foi: "<< str<<endl;
    return 0;


}