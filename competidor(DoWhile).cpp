#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ptb");
	
	int idade;
	
	//Solicita a idade do usuário
		cout<<"Digite sua idade";
		cin>>idade;
	
	
	do{
		if(idade < 7){
			cout<<"O competidor está baixo da facha etária";
			
		}else if(idade >= 7 && idade <= 12){
			cout<<"Você é um competidor infantil";
			
		}else if(idade >= 13 && idade <= 17){
			cout<<"Você é um competidor juvenil";
			
		}else if(idade >= 18 && idade <= 49){
			cout<<"Você é um competidor adulto";
			
		}else{
			cout<<"Você é um competidor senior";
		}
		
		
	//Solicita a idade do usuário
		cout<<"Digite sua idade";
		cin>>idade;
	}while(idade!=-1);
	
	
	
	
}
