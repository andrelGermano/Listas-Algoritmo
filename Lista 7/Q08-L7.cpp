#include <iostream>
using namespace std;

char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media);

int main(){

    float n1, n2, n3, med;
    int qtdFaltas, qtdAulas;
    char sit;

    cout << "\n\tDigite a primeira nota: ";
    cin >> n1;
    cout << "\n\tDigite a segunda nota: ";
    cin >> n2;
    cout << "\n\tDigite a terceira nota: ";
    cin >> n3;
    cout << "\n\tDigite o total de faltas do aluno: ";
    cin >> qtdFaltas;
    cout << "\n\tDigite o total de aulas da disciplina: ";
    cin >> qtdAulas;
    
    sit = situacao(n1, n2, n3, qtdFaltas, qtdAulas, &med);

    if(sit=='A'){
        cout << "\n\tMedia = " << med << " e situacao = APROVADO";
    }else{
        if(sit=='R'){
            cout << "\n\tMedia = " << med << " e situacao = REPROVADO";
        }else{
            cout << "\n\tMedia = " << med << " e situacao = REPROVADO POR FALTAS";
        }
    }

    cout << "\n\tFim de programa";
    system("PAUSE");

}

char situacao(float p1, float p2, float p3, int faltas, int aulas, float *media){
    char sit;
    *media = (p1+p2+p3)/3;

    if((faltas <= (aulas*0.25))&&(*media>=6.0)){
        sit = 'A';
    }else{
        if((faltas <= (aulas*0.25))&&(*media<6.0)){
            sit = 'R';
        }else{
            sit = 'F';
        }
    }
    return sit;
}
