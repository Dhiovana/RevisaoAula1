#include <iostream>
#include <stdlib.h>
using namespace std;

int calculo(int num1, int num2, int calcOperador, int &aux){
	int resultado;
	switch(calcOperador){
	case '+':
	resultado = num1 + num2;
	break;
	case '-':
	resultado = num1 - num2;
	break;
	case '*':
	resultado = num1 * num2;
	break;
	case '/':
	resultado = num1 / num2;
	break;
	default:
	aux = 0;
	return 0;
    }
    aux = 1;
	return resultado;
}

int main(){
	int num1, num2, aux, resultadoCalc;
	char calcOperador;
	cout << "Escolha o primeiro número \n";
	cin >> num1;
	cout << "Escolha o segundo número \n";
	cin >> num2;
	cout << "Escolha a operação necessária: ('+' para somar, '-' para subtrair, '*' para multiplicar e '/' para dividir) \n";
	cin >> calcOperador;
	resultadoCalc = calculo(num1, num2, calcOperador, aux);
	aux != 1 ? cout<< "Operador inválido, tente novamente" : cout<< num1<<calcOperador<<num2<<"="<<resultadoCalc;
}
