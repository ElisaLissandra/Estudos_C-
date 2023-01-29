#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "ptb");


int i, //valor do índice  
x, //Número inserido pelo usuário
maior=0; //Indica qual número é maior

	//Responsável por pedir a sequência de 15 números
   for(i = 0; i <= 14; i++) {
      cout<<"Digite um numero";
      cin>>x;
    
    //Verifica qual número da sequência é maior
    if(x>maior){
    	maior=x;
	}
      
   }
   
   cout<<"O maior número informado é:"<<maior;
}
