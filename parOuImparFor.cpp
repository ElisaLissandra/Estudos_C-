#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "ptb");
	
	
	int i, //Valor do índice
	num, // Número inserido pelo usuário
	par=0, //Indicar a quantidade número é par
	impar=0; //Indicar a quantidade de número impar
	
	s
	for(i=1; i<=num; i++){
	cout<<"Digite um número limite";
	cin>>num;
		
	if(num % 2 == 0){
		par++;
	}else {
		impar++;
	}
		
	}
	
	cout <<"Quantidade de números pares: "<<par<<"\n";
	cout <<"Quantidade de números ímpares: "<<impar;
}
