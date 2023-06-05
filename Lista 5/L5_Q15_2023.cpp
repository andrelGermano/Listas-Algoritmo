/*
15.	Elabore um algoritmo que leia uma matriz 3x3 e gere automaticamente 
uma nova matriz que seja a matriz transposta da primeira (troque as linhas por colunas).
 */

#include<iostream>
using namespace std;

int main(){
    int m[3][3], mt[3][3], i, j;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
           cout << "\tDigite o elemento Matriz[" << i << "][" << j <<"]: ";
            cin >> m[i][j];
        }
    }

    // Matriz original:
    cout << "\n\tMatriz Original: \n";
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
           cout << "\t" << m[i][j];
        }
        cout << "\n";
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
           mt[i][j] = m[j][i];
        }
    }

    // Matriz Transposta:
    cout << "\n\tMatriz Transposta: \n";
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
           cout << "\t" << mt[i][j];
        }
        cout << "\n";
    }



    cout << "\n\n\tFim\n\n\t";
	system("Pause");
}






