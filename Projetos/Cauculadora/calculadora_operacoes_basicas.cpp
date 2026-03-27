#include <iostream>
using namespace std;

int main (){

    char continuar = 's';

    while (continuar == 's') {
    float x,y;
    char operacao;
    printf("\n=========== Cauculadora ============\n");
    printf("---Soma(+)--Subtracao(-)--Divisao(/)--Multiplicacao(.)\n");
    printf("\n");

    

    cout<< "Digite dois numero:"<<endl;
    cin >> x >> y;

    
    cout << "Digite a operacao:";
    cin >> operacao;
    printf("\n");
    printf("================= Resultado ===================\n");
    printf("\n");
    
    

    if (operacao =='+')
    {
        cout << "Resultado:"<< x+y << endl;
    } else if (operacao=='-')
    {
        cout << "Resultado:"<< x-y << endl;
    }else if (operacao=='/')
    {
        cout << "Resultado:"<< x/y << endl;
    }else if (operacao=='.')
    {
        cout << "Resultado:"<< x*y << endl;
    }else
    {
        cout << "Operaçao invalida!!"<< endl;
    }
    

    cout << "\n Deseja continuar? (s/n): ";
    cin >> continuar;
    }
    

    return 0;
}