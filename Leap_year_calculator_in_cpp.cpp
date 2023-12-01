/*Dadas as regras a seguir, escreva um programa para ler um ano (número inteiro de 4 dígitos) e dizer se o ano determinado é/foi um ano 
bissexto.
Não houve anos bissextos antes de 1752.
Se o ano for dividido por 400 então é um ano bissexto.
Todos os outros anos divididos por 100 não são anos bissextos.
Todos os outros anos divididos por quatro são anos bissextos.
Por exemplo, 1.800,1.900 não foram anos bissextos, mas 2.000 serão; 1904, 1908,...,1996 foram/serão anos bissextos.
*/
	
#include <iostream>

using namespace std;

int ano_bissexto(int ano) {
	return ano % 4;
}

int main() {
	int ano{};

	cout << "Write the year: ";
	cin >> ano;

	int formula_bissexto = ano_bissexto(ano);

	if (ano > 1752 and formula_bissexto == 0) {
		cout << "\nE um ano bissexto :) ";
	}
	else {
		cout << "\nNao e um ano bissexto :( ";
	}
}
