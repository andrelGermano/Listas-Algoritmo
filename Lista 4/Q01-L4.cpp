#include <iostream>
using namespace std;

int main(){
	int numero[20], i, codigo;
	
	for(i=0;i<=19;i++){
		cout << "\nDigite o numero: ";
		cin >> numero[i];
	}
	do{
		cout << "\nCodigo: ";
		cin >> codigo;
	}while((codigo!=1) && (codigo!=2));
	
	if(codigo==1){
		for(i=0;i<=19;i++){
			cout << numero[i] << " ";
		}
	}else{
		for(i=19;i>=0;i--){
			cout << numero[i] << " ";
		}
	}
	cout << "\nFim de programa.";
	
}
