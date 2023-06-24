#include <iostream>
using namespace std;

float calcular(char operacaoF, float numeroF, float resultAtualF); //apresentando a função

int main(){
float numero, resultAtual=0;
char operacao;

	cout << "\nNumero: "; //pedindo o primeiro numero de todo o cálculo
	cin >> resultAtual;
	do{
		do{
			cout << "\nOperacao: "; //pedindo a operação
			cin >> operacao;
		}while(operacao!='+'&&operacao!='-'&&operacao!='*'&&operacao!='/'&&operacao!='='); //não deixará uma operação inválida passar
		
		if(operacao!='='){
			cout << "\nNumero: "; //se o símbolo não for '=', ele pedirá outro número, e assim pedirá operação, número, operação, número...
			cin >> numero;
		}
		
		resultAtual=calcular(operacao, numero, resultAtual); //chamando a função e aplicando o resultado em 'resultAtual'
		
		system("cls"); //limpando o que veio antes para mostrar apenas o resultado
		cout << endl << resultAtual << endl; //mostrando o resultado
	}while(operacao!='='); //laço acaba quando um '=' é digitado
}

float calcular(char operacaoF, float numeroF, float resultAtualF){ //fazendo a função 'calcular'
	if(operacaoF=='+')
		return resultAtualF+=numeroF; 
	else if(operacaoF=='-')
		return resultAtualF-=numeroF;
	else if(operacaoF=='*')
		return resultAtualF*=numeroF;
	else if(operacaoF=='/')
		return resultAtualF/=numeroF;
}
