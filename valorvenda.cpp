#include <iostream>
#include <locale>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ptb");
	
	int compra, venda;
	cout << "Digite um valor do produto: R$";
	cin >> compra;
	venda = compra + (compra + (compra * 20/100));
	cout << "O pre�o para venda �: " << venda;
}
