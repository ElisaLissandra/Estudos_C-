#include <iostream>
#include <locale>

using namespace std;

int main(){
	setlocale(LC_ALL, "ptb");
	
	int num;
	
	cout<<"Digite o valor do seu sal�rio";
	cin>>num;
	
	if(num >= 1000){
		
		cout<<"� maior ou igual ao sal�rio m�nimo.";	
	}else {
		cout<<"� menor que o sal�rio m�nimo";
	}
}
