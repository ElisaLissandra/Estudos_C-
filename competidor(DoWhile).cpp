#include <iostream>
#include <locale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ptb");
	
	int idade;
	
	//Solicita a idade do usu�rio
		cout<<"Digite sua idade";
		cin>>idade;
	
	
	do{
		if(idade < 7){
			cout<<"O competidor est� baixo da facha et�ria";
			
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
	}while(idade!=-1);
	
	
	
	
}
