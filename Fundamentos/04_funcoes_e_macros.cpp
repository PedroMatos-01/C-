#include <iostream>
using namespace std;
//int t;

#define pi 3.14;
#define curtir cout << "Gostou do meu aprendizado ? \n";


void increver(){

    cout << "Meu nome e Pedro Henrique \nEstou cursando SI na UFLA \n ";

}

int somar(int x, int y ){
    int soma;
    soma = x +y;
    return soma;
    //int t ;
    //t=0;

}


int main(){

    increver();

    int a =5 , b=4;
    int s;
    s = somar(a,b);
    cout<< "Soma : "<< s <<endl;

    int t;
    t=1;
    cout<<"Qual sera o valor de t:"<<t<<endl;

    //cout << pi;

    curtir;

    return 0;
}