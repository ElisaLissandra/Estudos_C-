#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ptb");
	
	int idade;
	
	//Imprime para o usu�rio as categorias
	cout<<"INFATIL - competidores entre 7 e 12 anos\n";
	
	cout<<"JUVENIL - competidores entre 13 e 17 anos\n";
	
	cout<<"ADULTO - competidores entre 18 e 49 anos\n";
	
	cout<<"SENIOR - competidores entre 50 anos ou mais\n";
	
	//Solicita a idade do usu�rio
		cout<<"Digite sua idade";
		cin>>idade;
	
	
	while(idade!=-1){
		
		if(idade < 7){
			cout<<"O competidor est� baixo da faixa et�ria";
			
		}else if(idade >= 7 && idade <= 12){
			cout<<"Voc� � um competidor infantil";
			
		}else if(idade >= 13 && idade <= 17){
			cout<<"Voc� � um competidor juvenil";
			
		}else if(idade >= 18 && idade <= 49){
			cout<<"Voc� � um competidor adulto";
			
		}else{
			cout<<"Voc� � um competidor senior";
		}
		
		//Solicita a idade do usu�rio
		cout<<"Digite sua idade";
		cin>>idade;
	
	}
	
	
}
