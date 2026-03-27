#include <iostream>
#include <cmath> //biblioteca apropriada para fazer raiz 
using namespace std;

int main(){
    float numero , quadrado , cubo ,raiz;
   
     cin >> numero ;
    quadrado = numero*numero;
    //quadrado =pow(numero,2);
    cubo = numero*numero*numero;
    //cubo =pow(numero,3);
    raiz= sqrt(numero);
    
    
    
    cout << quadrado << endl;
    cout << cubo << endl;
    cout << raiz <<endl;

    return 0;
}
