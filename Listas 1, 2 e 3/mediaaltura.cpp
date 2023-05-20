#include <iostream>
using namespace std;

int main(){
    char sexo;
    float altura, maisBaixa = 0, homens = 0, populacao = 0, totalAlturaP, totalAlturaH= 0, mediaH = 0, mediaPopulacao = 0;

    do {
        cout << "Informe o sexo: ";
        cin >> sexo;

        cout << "Informe sua altura: ";
        cin >> altura;

        populacao++;
        totalAlturaP += altura;

        if (sexo == 'm'){
            homens ++;
            totalAlturaH += altura;
        }

        if (sexo == 'f'){
            maisBaixa = altura;
            if (altura < maisBaixa){
                maisBaixa = altura;
            }
        }

    } while (sexo!='x');

    mediaH = totalAlturaH/homens;
    mediaPopulacao = totalAlturaP/populacao;
    cout << "Altura da mulher mais baixa: " << maisBaixa << endl;
    cout << "Media da altua dos homens: " << mediaH << endl;
    cout << "Media da altura da populacao: " << mediaPopulacao << endl;

    return 0;
}
