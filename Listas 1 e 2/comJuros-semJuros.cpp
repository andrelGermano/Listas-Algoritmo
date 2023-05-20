//Leia o valor total de uma compra, o valor da parcela e a quantidade de parcelas que a pessoa irá pagar, 
//verifique e escreva se o parcelamento foi com juros ou se foi sem juros.

#include <iostream>
using namespace std;

int main(){
	
	float valor, v_parcelas, q_parcelas;
	
	cout << "\nDigite o valor total da compra: ";
	cin >> valor;
	cout << "\nDigite o valor de cada parcela e em quantas parcelas o produto foi dividido, respectivamente. (Dê enter entre as respostas.)\nR: ";
	cin >> v_parcelas >> q_parcelas;
	
	if((q_parcelas * v_parcelas) > valor){
		cout << "O parcelamento foi com juros.";
	}else if((q_parcelas * v_parcelas) == valor){
		cout << "\nO parcelamento foi sem juros.";
	}else{
		cout << "\nValores digitados inválidos.";
	}
    cout << "\n\t\t\t\t\t\tFim de programa\n\n\n\n\n";
    system("pause");
}
