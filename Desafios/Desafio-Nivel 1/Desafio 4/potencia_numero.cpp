#include <iostream>
using namespace std;
// A "máquina" que calcula a potência
float pot (float base ,float expoente){
    float resultado = 1 ;
    int cont=1;
    while ( cont <= expoente)
    {
        resultado=resultado*base;
        cont++;
    }
    return resultado;
}

int main (){
    int b,ex;
    while(1){
    cout<<"Digite a base: ";
    cin >> b;
    cout <<"Digite o expoente(positivo): ";
    cin >> ex;
    float repost=pot(b,ex);
    cout<< b << " elevado a "<< ex <<" = "<< repost <<endl;
    
    int q;
    cout<<"Digite 1 para continuar cauculando e 0 para parar por aqui ";
    cin>>q;
    if (q==0)
    {
        break;
    }
    
}

    
    

    return 0;
}