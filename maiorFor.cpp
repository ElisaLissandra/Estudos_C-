#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "ptb");


int i, //valor do �ndice  
x, //N�mero inserido pelo usu�rio
maior=0; //Indica qual n�mero � maior

	//Respons�vel por pedir a sequ�ncia de 15 n�meros
   for(i = 0; i <= 14; i++) {
      cout<<"Digite um numero";
      cin>>x;
    
    //Verifica qual n�mero da sequ�ncia � maior
    if(x>maior){
    	maior=x;
	}
      
   }
   
   cout<<"O maior n�mero informado �:"<<maior;
}
