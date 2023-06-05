/*
4.	Escreva um algoritmo que leia uma matriz A(15,5) e a escreva.
Verifique, a seguir, quais os elementos de A que estão repetidos e 
quantas vezes cada um está repetido. Escrever cada elemento repetido
com uma mensagem dizendo quantas vezes cada elemento aparece em A.  */

#include<iostream>
using namespace std;


int main(){
    const int t1=3, t2=5;
    int m[t1][t2], i, j, i2, j2, cont;
    bool mm[t1][t2];

    for(i=0; i<t1; i++){
        for(j=0; j<t2; j++){
            cout << "\tDigite o elemento Matriz[" << i << "][" << j <<"]: ";
            cin >> m[i][j];
            mm[i][j] = false;
        }
    }

    cout << "\n\tMatriz original: \n";
    for(i=0; i<t1; i++){
        for(j=0; j<t2; j++){
           cout << "\t" << m[i][j];
        }
        cout << "\n";
    }
    // Contagem de elementos repetidos:
    for(i=0; i<t1; i++){
        for(j=0; j<t2; j++){
            // neste ponto do algoritmo tem-se o elemento m(i,j) "da vez"
            // precisamos então buscar se esse elemento "da vez" aparece de novo na matriz
            // por este motivo precisamos novamente percorrer a matriz.
            cont = 0;
            for(i2=0; i2<t1; i2++){
                for(j2=0; j2<t2; j2++){
                    if((m[i][j]==m[i2][j2])&&(mm[i2][j2]==false)){
                        cont++;
                        mm[i2][j2] = true;
                    }
                }
            }
            if(cont>0)
                cout << "\n\tO elemento " << m[i][j] << " aparece " << cont << " vezes";
        }
    }


    cout << "\n\n\tFim\n\n\t";
	system("Pause");
}






