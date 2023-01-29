#include <iostream>
#incluce<locale>
using namespace std;
int main()
{
	setlocale (LC_ALL, "ptb");
	int anoAtual, anoNasc, idade;
	cout <<"Ano Atual: ";
	cin >> anoAtual;
	cout <<"Ano de nascimento:";
	cin >> anoNasc;
	idade = anoAtual-anoNasc;
	cout <<"Você tem ou fará "<< idade << "anos.";
}
