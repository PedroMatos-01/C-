#include <stdio.h> // Bliblioteca de entrada e saida padrao 

int main(){
    int idade;// variavel 

    printf("Sua idade e: "); //saida principal
    scanf("%d", &idade);//Dados salvos 

    printf("Parabens pelos seus %d anos de vida!",idade);// leitura do digito e da variavel 

    return 0;//sempre dar o isso quando tiver o main , é como se fosse o fim de tudo 
}