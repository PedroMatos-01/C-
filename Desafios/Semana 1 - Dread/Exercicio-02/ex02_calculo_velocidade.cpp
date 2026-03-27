#include <iostream>
#include <cmath> // para raizes etc (sqrt(numero))
using namespace std;

int main (){
	float comprimento, velocidade;
	
	cin >> comprimento;
	velocidade = 14.6*sqrt(comprimento);
	
	cout << velocidade << endl;
	
	return 0;
}

