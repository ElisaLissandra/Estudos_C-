#include <iostream>
#include <locale>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "ptb");
	
	int dias, calc;
	cout << "Digite quantos dias você viveu:";
	cin >> dias;
	calc = (dias/365);
	cout << "A sua idade é: " << calc << "\n";	
	
	if(calc >= 18){
		cout <<"Você é maior de idade";
	}

}
