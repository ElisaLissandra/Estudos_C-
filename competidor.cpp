#include <iostream>

using namespace std;

int main(){
	
	int idade;
	
	cout<<"Informe sua idade: ";
	cin>>idade;

	if(idade>=7 && idade<=12)
	{
		cout<<"Voc� � um competidor infantil";
	}
	
	else if(idade>=13 && idade<=17)
	{
		cout<<"Voc� � um competidor juvenil";
	}
	else if(idade>=18 && idade<=49)
	{
		cout<<"Voc� � um competidor adulto";	
	}
	else if(idade>=50)
	{
		cout<<"Voc� � um competidor senior";
	}
	else 
	{
		cout<<"Idade invalida";
	}
}
