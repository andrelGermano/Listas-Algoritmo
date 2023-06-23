/*4. Escreva um programa que l� um valor inteiro (maior do que 1 e menor ou igual a 10) e exibe a tabuada (at� 10) de multiplica��o do 
n�mero lido. Voc� dever� escrever as seguintes fun��es: 
- int LeNumero(int n1,int n2) 
L� um n�mero inteiro no intervalo especificado (n1, n2) e o retorna. Cada vez que for 
digitado um n�mero inv�lido (fora do intervalo especificado) a fun��o deve exibir a 
mensagem "N�mero inv�lido. Digite novamente!" 
- void Tabuada( int n) 
Recebe como par�metro um n�mero inteiro e exibe na tela a tabuada de multiplica��o 
at� 10 do n�mero lido. Exemplo: n�mero lido 5 
5 x 1 = 5 5 x 2 = 10 .... 5 x 10 = 50*/
#include <iostream>
using namespace std;

int LeNumero(int n1,int n2);
void Tabuada(int numero);
int main(){
	int const a=1, b=10;
	int numero;
	
	numero=LeNumero(a,b);
	Tabuada(numero);
	
	
}
int LeNumero(int n1,int n2){
	int resposta;
	bool tchau;
	do{
		tchau=true;
		cout << "\n Digite um numero: ";
		cin >> resposta;
		if(resposta>10||resposta<=1){
			cout << "\n Numero invalido. Digite novamente!\n";
			tchau=false;
		}
	}while(!tchau);
	return resposta;
}
void Tabuada(int numero){
	int i;
	cout << "\nTabuada...";
	for(i=0;i<=10;i++){
		cout << endl << numero << " x " << i << " = " << (numero*i);
	}
}
