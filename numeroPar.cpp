#include <iostream>
#include <locale>

using namespace std;
int main() {
	
	setlocale(LC_ALL, "ptb");
	
	int num, numPar;
	
	cout<<"Digite um n�mero qualquer:";
	cin>>num;
	
	numPar = num%2;
	
	if(numPar == 0){
		cout<<"O n�mero � par";
	}else {
		cout<<"N�o � um n�mero par";
	}
}
