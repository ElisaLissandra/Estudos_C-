#include <iostream>
#include <locale>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "ptb");
	
	int num;
	
	cout<<"Digite um n�mero qualquer:";
	cin>>num;
	
	if(num > 0){
		
		cout<<"� um n�mero positivo";
		
	}else {
		cout<<"� um n�mero negativo";
	}
	
}
