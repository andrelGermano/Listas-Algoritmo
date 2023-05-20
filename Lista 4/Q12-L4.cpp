#include <iostream>
using namespace std;
int main(){
	int v[10], i, num;
	bool veri=true;
	
	for(i=0;i<=9;i++){
		do{
			cout << "\nNumero: ";
			cin >> v[i];
		}while(v[i]<0);
	}
	cout << "\nNumero verificador: ";
	cin >> num;
	for(i=0;i<=9;i++){
		if(num==v[i]){
			veri=false;
			cout << "indice: "<< i << " ";
		}
	}
	if(veri==true){
		cout << "\nNumero nao localizado";
	}
}
