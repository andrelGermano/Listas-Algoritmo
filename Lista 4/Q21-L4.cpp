/*21. Elabore um algoritmo que gere automaticamente um vetor de 30 elementos contendo a sequencia de 
n�meros inteiros escolhida pelo usu�rio no menu abaixo:
Menu Principal
------------------------------------------------------
1 - Sequ�ncia de Fibonacci
2 - N�meros Triangulares
3 - N�meros Primos
4 - N�meros Quadrangulares
5 - Divis�veis por 3 e 5 simultaneamente
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
	cout << "Escolha a op��o do menu: ";
	cin >> escolha;
	switch(escolha){
		case 1: for		
	}
}
