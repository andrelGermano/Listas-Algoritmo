/*
16.	Elabore um algoritmo que leia uma frase em uma string e uma palavra em outra string,
verifique e escreva se a palavra está contida na frase. 
Entradas: “esta é a frase” e “frase” 
Saída: a palavra “frase” está contida na frase “esta é a frase”. 

*/

#include<iostream>
#include<string>
using namespace std;


int main(){
    string frase, palavra, pedaco;
    int i;
    bool encontrada = false;

    cout << "\n\tDigite uma frase: ";
    getline(cin, frase);
    getchar();

    cout << "\n\tDigite uma palavra: ";
    getline(cin,palavra);

    for(i=0; i<=(frase.length()-palavra.length()); i++){
        pedaco = frase.substr(i, palavra.length());
        if(pedaco==palavra){
            encontrada = true; //flag de marcação
        }
    }
    if(encontrada){
        cout << "\n\tA palavra foi encontrada";
    }else{
        cout << "\n\tA palavra NAO foi encontrada";
    }
    
    cout << "\n\n\tFim\n\n\t";
	system("Pause");
}






