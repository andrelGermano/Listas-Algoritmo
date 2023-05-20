#include <iostream>
using namespace std;

int main (){
	
	int ano;
	float valor;
	float impostoUm;
	float impostoDois;
	
	cout << "Digite o ano de seu veiculo e o valor que pagou, respectivamente: ";
	cin >> ano >> valor;
	
	impostoUm = (valor * 0.015);
	impostoDois = (valor * 0.01);
	
	if(ano >= 1990){
		cout << "o imposto cobrado sera igual a" << impostoUm;
	}else{
		cout << "o imposto cobrado sera igual a" << impostoDois;
	}
}
