#include <iostream>
using namespace std;

int fat(int x){ //Você criou uma "máquina" que recebe um número (x) e devolve um inteiro.
    int fatorial =1;//Começamos com 1, porque qualquer número vezes 0 daria 0.
    for (int i=1 ; i<=x ;i++){//Um contador que vai de 1 até o seu número.
        fatorial*=i;//Abreviação de fatorial = fatorial * i. Ele vai multiplicando e guardando o resultado.
    }
    return fatorial;//A máquina "cospe" o resultado final para quem a chamou.

}

int main (){
    int n ;
    while (true){
    cout<<"Me informe um numero inteiro positivo"<<endl;
    cin >> n;
    if ( n <= 0 ){
       cout << "Numero invalido! Digite um inteiro positivo." << endl;
    } else{
        break;
    }
    }

    int valorfat = fat(n);
    cout<<"O valor do fatorial de "<< n <<" e:"<< valorfat << endl;

    return 0;
}
