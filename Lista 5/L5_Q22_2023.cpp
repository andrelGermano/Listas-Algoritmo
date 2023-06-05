/*
22.	Elabore um algoritmo que leia uma frase e escreva-a de duas formas: 
a frase completa e a frase contendo só as palavras em “posições ímpares” 
(1ª palavra, 3ª palavra, 5ª palavra, ...). 
Entrada: eu gosto de roupa azul
Saída: eu de azul
*/

#include<iostream>
#include<string>
using namespace std;

int main(){
    string frase, saida;
    int i, inicio = 0;
    bool impar = true;

    cout << "\n\tDigite uma frase: ";
    getline(cin, frase);

    frase += " ";
    cout << "\n\tA frase completa: " << frase;

    for(i=0; i<frase.length(); i++){
        if(frase[i]==' '){
            if(impar){
                saida += frase.substr(inicio, i-inicio+1);
            }
            inicio = i+1;
            impar = !impar;
        }

    }

    cout << "\n\tA frase alterada: " << saida;


    cout << "\n\n\tFim\n\n\t";
	system("Pause");
}






