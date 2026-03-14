#include <iostream>//Biblioteca 
#include <math.h>//bibleioteca de potencia
using namespace std;

int main(){
    int a =5 ,b=2;

    int soma = a+b ;
    cout<<"Soma:"<< soma <<endl;  
    //cout <<"Soma;"<<a+b<<endl;  
    
    int sub = a-b;
    cout<<"Subtracao:"<<sub<<endl;
    //cout <<"Subtracao:"<< a-b << endl;

    int mult= a*b;
    cout<< "Multiplicacao:" << mult <<endl;
    //cout << "Multiplicacao:" << a*b << endl;

    int quacdiv = a /b ;
    cout << "Quociente da divisao:" << quacdiv << endl;

    int restodiv = a%b;
    cout << "Resto da divisao:" << restodiv << endl;

    float div= (float)a/ (float)b;
    cout << "Divisao:"<< div << endl;

    float pot = pow(a,b);
    cout << "Potencia:"<< pot <<endl;

    //Incremento e decremento 
    cout << "a antigo:" << a << endl;
    //a = a+1;
    //a+=1;
    //a++;
    //a = a-1;
    //a-=1;
    // a--;
    //a-=4;
    a*=2;
    cout << "a novo :" << a << endl;





    return 0;
}