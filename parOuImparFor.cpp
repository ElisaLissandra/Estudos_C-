#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "ptb");
	
	
	int i, //Valor do �ndice
	num, // N�mero inserido pelo usu�rio
	par=0, //Indicar a quantidade n�mero � par
	impar=0; //Indicar a quantidade de n�mero impar
	
	s
	for(i=1; i<=num; i++){
	cout<<"Digite um n�mero limite";
	cin>>num;
		
	if(num % 2 == 0){
		par++;
	}else {
		impar++;
	}
		
	}
	
	cout <<"Quantidade de n�meros pares: "<<par<<"\n";
	cout <<"Quantidade de n�meros �mpares: "<<impar;
}
