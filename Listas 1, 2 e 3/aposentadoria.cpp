//Elabore um algoritmo que leia a idade e o tempo de servi�o de um trabalhador e escreva se ele pode ou nao se aposentar. As condi��es para aposentadoria s�o:
//� Ter pelo menos 65 anos;
//� Ou ter trabalhado pelo menos 30 anos;
//� Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos.

#include <iostream>
using namespace std;

int main() {
	
	cout << "\n\t\t\t\t\tQuer saber j� pode se aposentar?\n";
	
	int idade;
	int tempo;
	
	cout << "Quantos anos voc� tem? ";
    cin >> idade;
	cout << "H� quanto tempo voc� trabalha? ";
	cin >> tempo;
	
	if(idade > tempo){
		if(idade >= 60 && tempo >= 25){
	    	cout << "\nVoc� j� pode se aposentar.";
	    }else if(idade >= 65){
			cout << "\nVoc� j� pode se aposentar.";
		}else if(tempo >= 30){
			cout << "\nVoc� j� pode se aposentar.";
	    }else{
		    cout << "\nVoc� n�o est� apto a se aposentar.";
	    }
	}else{
		cout << "\nA sua idade e o tempo que voc� trabalha n�o condizem.";
	}
	
	cout << "\n\n\t\t\t\t\tFim de programa.";
	
	cout << "\n\t", system("pause");
} 
