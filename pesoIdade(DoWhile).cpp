#include <iostream>
#include<locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "ptb");
	
	int idade, idadeIndividual, entrevistados, somaIdade;
	float  peso, pesoindividual, mediaPeso, mediaIdade, somaPeso;
	
	//Variav�is de controle
	somaPeso=0;
	somaIdade=0;
	entrevistados=0;
	
	
	//Solicita o peso do usu�rio
	cout<<"Informe seu peso";
	cin>>peso;
	
   do{
		
		//Solicita a idade do usu�rio
		cout<<"Informe sua idade:";
		cin>>idade;
		
		entrevistados++;
		somaIdade+=idade;
		somaPeso+=peso;
		
		
		//Solicita o peso do usu�rio
		cout<<"Informe seu peso";
		cin>>peso;
		
	}while(peso!=0);
	
	//M�dia da idade
	mediaIdade=somaIdade/entrevistados;
	
	//Media de peso
	mediaPeso=somaPeso/entrevistados;
	
	cout<<"N�mero de entrevistados: "<<entrevistados <<"A m�dia de idade das pessoas entrevistadas: "<<mediaIdade<<" e a m�dia de peso das pessoas entrevistadas: "<<mediaPeso;
	
}
