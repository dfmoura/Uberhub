#include <bits/stdc++.h>
using namespace std;


int main(){

    float a,b,c,d,media,nota,nova_media;
    cin>>a>>b>>c>>d;
    
    media = ((a*2)+(b*3)+(c*4)+(d*1))/10;
    cout<<"Media: "<<fixed<<setprecision(1)<<media<<endl;
    if(media >=7){cout<<"Aluno aprovado."<<endl;}
    else if(media<5){cout<<"Aluno reprovado."<<endl;}
    else if((media>=5)&&(media<=6.9))
    {
        cout<<"Aluno em exame."<<endl;
        cin>>nota;
        cout<<"Nota do exame: "<<nota<<endl;
        nova_media = (media+nota)/2;
        if(media >=5){cout<<"Aluno aprovado."<<endl;}
        else if(media<=4.9){cout<<"Aluno reprovado."<<endl;}
        cout<<"Media final: "<<nova_media<<endl;
    }
    
}