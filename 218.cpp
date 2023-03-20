#include <bits/stdc++.h>
using namespace std;

int main(){
    char operacao;
    double num1=0, num2=0;
    cin>>operacao>>num1>>num2;
    double divisao = num1 / num2;
    double multipli = num1 * num2;
    
    if(operacao == 'M'){
        cout<<fixed<<setprecision(2)<<multipli<<endl;
    }else if(operacao == 'D'){
        cout<<fixed<<setprecision(2)<<divisao<<endl;
    }
    

}