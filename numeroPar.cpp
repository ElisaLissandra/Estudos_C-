#include <iostream>
#include <locale>

using namespace std;
int main() {
	
	setlocale(LC_ALL, "ptb");
	
	int num, numPar;
	
	cout<<"Digite um número qualquer:";
	cin>>num;
	
	numPar = num%2;
	
	if(numPar == 0){
		cout<<"O número é par";
	}else {
		cout<<"Não é um número par";
	}
}
