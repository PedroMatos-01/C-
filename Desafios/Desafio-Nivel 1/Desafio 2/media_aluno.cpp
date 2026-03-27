#include <iostream>
using namespace std;

int main(){

    float nota1,nota2,nota3,mediaal;


    cout <<"Qual foi a sua nota da Prova 1:"<< endl;
    cin >> nota1;
    cout <<"Qual foi a sua nota da Prova 2:"<<endl;
    cin >> nota2;
    cout <<"Qual foi a sua nota da Prova 3:"<<endl;
    cin >> nota3;
    
    mediaal= (nota1+nota2+nota3)/3;

    if (mediaal<5)
    {
        cout <<"--Abaixo da media--"<<endl;
    }
    else if (mediaal==5)
    {  
        cout << "---Parabens esta na media---";
    } 
    else {
        cout<<"----Parabens,arrasou!!\nEsta acima da media-----"<<endl;
    }
    
    




    return 0;
}