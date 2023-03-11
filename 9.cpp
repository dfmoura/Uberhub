#include <bits/stdc++.h>
using namespace std;

int main(){
	
	int N=10, aux, c;
	string a,b;
	vector<int> vet;
	
	for(int i=0; i<N; i++){
		cin>>aux;
		vet.push_back(aux);
	}
	cin>>c;
	for(int i = 0; i<N;i++){
		if(vet.at(i) ==c){a="SIM";}
}if (a == "SIM"){cout<<"SIM"<<endl;}else{cout<<"NAO"<<endl;}
}