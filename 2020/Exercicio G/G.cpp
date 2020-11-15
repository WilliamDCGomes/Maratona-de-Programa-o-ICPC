#include<bits/stdc++.h>
using namespace std;
int main() {
	int caixas = 0, maior = 100, aux=100;
	cin>>caixas;
	for(int i =0;i<caixas;i++){
		int box;
		cin>>box;
		aux+=box;
		if(aux>maior){
			maior=aux;
		}
	}
	cout<<maior<<endl;
	return 0;
}
