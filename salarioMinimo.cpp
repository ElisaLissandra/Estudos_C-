#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "ptb");
	
	int num;
	
	cout<<"Digite o valor do seu salário";
	cin>>num;
	
	if(num >= 1000){
		
		cout<<"É maior ou igual ao salário mínimo.";	
	}else {
		cout<<"É menor que o salário mínimo";
	}
}
