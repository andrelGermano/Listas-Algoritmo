#include <iostream>
using namespace std;
int main(){
	int vet[20], dif[2]={0,0}, i, vet1[2], vet2[2];
	
	for(i=0;i<=19;i++){
		cout << "\nDigite o numero: ";
		cin >> vet[i];
	}
	for(i=0;i<=19;i++){
		if(vet[i]<vet[i+1]){
			dif[0]=(vet[i]-vet[i+1])*-1;
		}else{
			dif[0]=vet[i]-vet[i+1];
		}
		if(dif[0]>dif[1]){
			vet1[0]=i;
			vet2[0]=i+1;
			vet1[1]=vet[i];
			vet2[1]=vet[i+1];
			dif[1]=dif[0];
		}
	}
	cout << "\nMaior diferença: " << "indice " << vet1[0] << "(" << vet1[1] << ") - indice " << vet2[0] << "(" << vet2[1] << ")" << "= " << dif[1];
}
