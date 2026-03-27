#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	float largura,altura,area,litros;
	cin >> largura;
	cin >>altura;
	area=(largura*altura) *3;
	litros= area/2;
	
	cout << fixed << setprecision(2)<< litros <<" Litros"<< endl;
	
    return 0;
}

