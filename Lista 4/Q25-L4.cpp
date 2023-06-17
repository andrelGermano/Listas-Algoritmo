#include <iostream>
using namespace std;
int main(){
	int i, tam=2, q[tam];
	float p[tam];
	
	for(i=0;i<tam;i++){
		cout << "\n--------- Mercadoria " << i+1 << " ---------";
		cout << "\n Quantidade vendida no final do mes: ";
		cin >> q[i];
		cout << "\n Preco unitario do produto: ";
		cin >> p[i];
	}
	for(i=0;i<tam;i++){
		cout << "\nFaturamento mensal do mês da Mercadoria " << i+1 << ": " << (p[i]*q[i]);
	}
}
