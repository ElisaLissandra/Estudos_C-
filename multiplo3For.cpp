#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "ptb");


int i, //valor do índice  
x, //Número inserido pelo usuário
calculo=0; //Quantidade de número múltiplos de 3

	//Responsável por pedir a sequência de 10 números
   for(i = 0; i <= 9; i++) {
      cout<<"Digite um numero";
      cin>>x;
    
    //Verifica quais números é múltiplo de 3
    if(x % 3 == 0){
    	calculo+=1;
	}
      
   }
   
   cout<<"Foram  informados"<<calculo<<"múltiplos de 3.";
}

