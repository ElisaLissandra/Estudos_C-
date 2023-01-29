#include <iostream>
#include<locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "ptb");
	
	int idade, idadeIndividual, entrevistados, somaIdade;
	float  peso, pesoindividual, mediaPeso, mediaIdade, somaPeso;
	
	//Variavéis de controle
	somaPeso=0;
	somaIdade=0;
	entrevistados=0;
	
	
	//Solicita o peso do usuário
	cout<<"Informe seu peso";
	cin>>peso;
	
   do{
		
		//Solicita a idade do usuário
		cout<<"Informe sua idade:";
		cin>>idade;
		
		entrevistados++;
		somaIdade+=idade;
		somaPeso+=peso;
		
		
		//Solicita o peso do usuário
		cout<<"Informe seu peso";
		cin>>peso;
		
	}while(peso!=0);
	
	//Média da idade
	mediaIdade=somaIdade/entrevistados;
	
	//Media de peso
	mediaPeso=somaPeso/entrevistados;
	
	cout<<"Número de entrevistados: "<<entrevistados <<"A média de idade das pessoas entrevistadas: "<<mediaIdade<<" e a média de peso das pessoas entrevistadas: "<<mediaPeso;
	
}
