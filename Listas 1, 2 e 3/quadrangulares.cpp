/*Elabore um algoritmo que leia um número inteiro qualquer e verifique se ele é quadrangular. Se for, 
mostrar os próximos 10 quadrangulares depois dele. Se não for, informar. OBS: Os números 
quadrangulares são 1, 4, 9, 16, 25, ..., ou seja, 1x1, 2x2, 3x3, 4x4, ...*/
#include <iostream>
using namespace std;

int main(){
	int numero, cont1, cont2, verificacao, quadrangular=0, proxQuad;
	
	cout << "Digite um numero: ";
	cin >> numero;
	
	for(cont1=2;cont1<numero;cont1++){
		verificacao = numero/cont1;
		if(verificacao==cont1){
			quadrangular=1;
			proxQuad=cont1;
		}
	}
	
	if(quadrangular>0){
		cout << "\nEste eh um numero quadrangular. Os proximos 10 numeros quadrangulares sao: ";
		for(cont2=1;cont2<=10;cont2++){
			proxQuad++;
			cout << proxQuad*proxQuad;
			if(cont2<10){
				cout << ", ";
			}else
			    cout << ".";	
		}
	}else{
		cout << "\nEsse nao eh um numero quadrangular";
	}
	cout << "\n\n\n\n\nFim de programa. ";
	system("pause");
}
