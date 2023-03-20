#include <bits/stdc++.h>
using namespace std;

// comparar 2 strings e imprimir total de repeticoes

int main(){
    
    string str1, str2;
    int N,contar = 0;
    cin>>N>>str1>>str2;

    for(int i = 0; i < str1.size(); i++){
        if(str1[i] == str2[i]){
            contar++;
        }
    }
    cout<<contar<<endl;
}