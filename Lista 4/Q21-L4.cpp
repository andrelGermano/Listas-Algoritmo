/*21. Elabore um algoritmo que gere automaticamente um vetor de 30 elementos contendo a sequencia de 
números inteiros escolhida pelo usuário no menu abaixo:
Menu Principal
------------------------------------------------------
1 - Sequência de Fibonacci
2 - Números Triangulares
3 - Números Primos
4 - Números Quadrangulares
5 - Divisíveis por 3 e 5 simultaneamente
6 - Sair*/
#include <iostream>
using namespace std;
int main(){
	int v[30], i, escolha;
	
	for(i=0;i<30;i++){
		v[i]=i+1;
	}
	
	cout << "-------------------------------------" << endl;
	cout << " 1 - Sequencia de Fibonacci  " << endl;
	cout << " 2 - Numeros Triangulares   " << endl;
	cout << " 3 - Numeros Primos   " << endl;
	cout << " 4 - Numeros Quadrangulares   " << endl;
	cout << " 5 - Divisiveis por 3 e 5 simultaneamente   " << endl;
	cout << " 6 - Sair   " << endl;
	cout << "Escolha a opção do menu: ";
	cin >> escolha;
	switch(escolha){
		case 1: for		
	}
}
