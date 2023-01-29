#include <iostream>
using namespace std;

int main(){
	float lado1, lado2, lado3;
	
   cout << "Informe o primeiro lado: ";
   cin >> lado1;
   
   cout << "Informe o segundo lado: ";
   cin >> lado2;
   
   cout <<"Informe o terceiro lado: ";
   cin >> lado3;
   
   if(lado1 == lado2 && lado2 == lado3)
   {
   	
   	 cout <<"Este é um triângulo equilátero!";
   	
   }
   else if(lado1 == lado2 || lado2 == lado3 || lado3 == lado1)
   {
   	
   	 cout <<"Este é um triângulo equilátero!";
   	 
   }
   else 
   {
   	cout <<"Este é um triângulo isósceles!";
   }
}
