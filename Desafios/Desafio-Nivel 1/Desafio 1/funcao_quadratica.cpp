#include <iostream>
using namespace std;

int main(){
    float valorx, resultado ;

    cout << "Dada a Funcao: f(x)= x(2)-3x+5"<< endl;
    cout << "Informe o valor de x :"; 
    cin >> valorx ;

    resultado= (valorx*valorx)-(3*valorx)+5 ;
    cout<< "O resultado de f("<<valorx<<"):" <<resultado<<endl;



    return 0;
}