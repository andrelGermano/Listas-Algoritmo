/*18. Elabore um algoritmo que leia duas strings A e B e junte-as em uma �nica string C. 
Entradas: �frase 1� e �outra frase qualquer� 
Sa�da: �frase 1 outra frase qualquer� */
#include <iostream>
#include <string>
using namespace std;
 int main(){
 
string A, B, C;

cout << "\nFrase A: ";
getline(cin,A);
cout << "\nFrase B: ";
getline(cin,B);

C = A + " " + B;

cout << endl << C ;
}
