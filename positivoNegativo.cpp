#include <iostream>
#include <locale>

using namespace std;

int main() {
	
	setlocale(LC_ALL, "ptb");
	
	int num;
	
	cout<<"Digite um número qualquer:";
	cin>>num;
	
	if(num > 0){
		
		cout<<"É um número positivo";
		
	}else {
		cout<<"É um número negativo";
	}
	
}
