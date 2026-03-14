#include <iostream>
using namespace std;

int main(){
    string resposta;
    cout<<"Voce esta feliz nesse momento?(sim/nao):";
    cin >> resposta ;

    if (resposta== "sim")
    {
        cout << "Nossa que maravilha , estou muito feliz tbm por o codigo ter dado certo"<<endl;  /* code */
    }
    else if (resposta== "nao")
    {
       cout<< "Que triste , nao fique assim fiz tudo isso por voce"<<endl; /* code */
    }
    else {
        cout<<"Nao entendi sua resposta repita novamente "<<endl;
    }
    
    



    return 0;
}