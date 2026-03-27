#include <iostream>
using namespace std;

int main (){
    float nota1, nota2; 
    cout<< "Informe a Nota 1;\n ";
    cin >> nota1;
    cout << "Informe a Nota 2\n";
    cin >> nota2;
    float media =(nota1+nota2)/2;
    cout << "Media= " << media <<endl;

    //Comparaçoes; Igual; == , Diferente: != , Outros: >, <  , >= , <= 
    //if(media >= 5){  
    //cout << "Aluno aprovado \n";
    //}

    //if (media >= 5){
    //    cout << "Aluno Aprovado\n";
    //} else{
    //    cout << "Aluno Reprovado \n";
    //}

    // 0-2.5 D  , 2.5-5 C , 5-7.5 B , 7.5-10 A
    if (media < 2.5){
        cout << "Nota Final: D\n";
    } else if (media < 5){
        cout << "Nota Final: C\n";
    } else if (media < 7.5 ){
        cout << "Nota Final: B\n";
    } else {
        cout << "Nota Final: A\n";
    }
    
    //Operadores logicos : E : && , OU: || , Nao: !
    float freq;
    cout << "Qual e a Frequencia do  aluno ?\n";
    cin >> freq;

    //if ( media >= 5 && freq >= 75)
    // {
    //    cout << "Aluno aprovado!\n";
    //} else {
    //    cout << "Aluno reprovado!\n";
    //}
    
    //if (media < 5 || freq < 75)
    //{
    //    cout << "Aluno reprovado!\n";
    //} else{
    //    cout<< "Aluno aprovado!\n";
    //}

    //Operador Tenario
    
    
    (media >=5) ? cout << " Aprovado" : cout << "Reprovado";
    
    



    return 0;
}