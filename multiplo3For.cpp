#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "ptb");


int i, //valor do �ndice  
x, //N�mero inserido pelo usu�rio
calculo=0; //Quantidade de n�mero m�ltiplos de 3

	//Respons�vel por pedir a sequ�ncia de 10 n�meros
   for(i = 0; i <= 9; i++) {
      cout<<"Digite um numero";
      cin>>x;
    
    //Verifica quais n�meros � m�ltiplo de 3
    if(x % 3 == 0){
    	calculo+=1;
	}
      
   }
   
   cout<<"Foram  informados"<<calculo<<"m�ltiplos de 3.";
}

