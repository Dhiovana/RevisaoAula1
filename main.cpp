#include <iostream>
#include <stdlib.h>
using namespace std;

int calculo(int num1, int num2, int calcOperador){
	int resultado;
	switch(calcOperador){
	case '+';
	result = num1 + num2;
	break;
	case '-';
	result = num1 - num2;
	break;
	case '*';
	result = num1 * num2;
	break;
	case '/';
	result = num1 / num2;
	break;
	default:
	aux = 0
	return 0;
    }
    aux = 1;
	return resultado;
}

int main{
	int num1, num2, aux, resultCalc;
	char calcOperador;
	cout << "Escolha o primeiro número \n";
	cin >> num1;
	cout << "Escolha o segundo número \n";
	cin >> num2;
	cout << "Escolha a operação necessária: ('+' para somar, '-' para subtrair, '*' para multiplicar e '/' para dividir) \n";
	cin >> calcOperador;
}
