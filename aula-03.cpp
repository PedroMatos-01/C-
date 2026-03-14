#include <iostream>

using namespace std;

int main(){
    int inteiro;//declarando uma variavel do tipo inteiro 
    inteiro =5;//declarando valor a essa variavel somente numeros inteiros
    cout<< inteiro << endl;//saida para mostar essa variavel, juntamente com a quebra de linhas endl

    float real ; //variavel para numeros com virgula 
    real =5.2;//numeros com virgula , numeros pequenos
    cout << real <<endl;

    double real2;//variavel para numeros que tem  virguala e que são grandes 
    real2=5.2e99;
    cout<<real2<<endl;

    bool booleano;//Armazena valores com dois estados: verdadeiro ou falso
    booleano = false;
    cout << booleano << endl;

    char letra;//Armazena caracteres individuais, como 'a' ou 'B'. Os valores de caracteres são delimitados por aspas simples.
    letra= 'b';
    cout <<letra<<endl;

    string palavra ;// Armazena texto, como "Bola",com aspas dulpas
    palavra= "bola";
    cout <<palavra<<endl;

    int idade;
    cout<<"Qual a sua idade? "<< endl ;
    cin >>idade;
    cout << "Olha que interessante ," << idade <<"anos nas costa e ainda nao trabalha " <<endl;





    return 0;
} 