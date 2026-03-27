#include <iostream>
using namespace std;
int main(){
    int idade,renda;

    printf("-----------Moradia Estudantil ----------\n");
    printf(" ==Verificando as condicoes do usuario==\n");

    cout<<"Qual a sua idade ? ";
    cin >>idade ;

    cout <<"Qual a sua renda? R$";
    cin >> renda;


    printf("  ----------Resultado da Analise-----------\n");
    if (idade>=21 && renda<=1200)
    {
        cout<<"Parabens voce esta qualificado para ser inserido na Moradia Estudantil !!!\nEntraremos em contato para mais informacoes.\n";
    } else if (idade< 20)
    {
        cout <<"Candidato indeferido por nao qualificar aos requitos\n Idade menor que 21 anos.";
    } else 
    {
        cout<<"Candidato indeferido por nao qualificar aos requisitos\n Renda maior que R$1200.00 .";
    }
    
    printf("=================================================\n");

    return 0;
}