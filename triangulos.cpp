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
   	
   	 cout <<"Este � um tri�ngulo equil�tero!";
   	
   }
   else if(lado1 == lado2 || lado2 == lado3 || lado3 == lado1)
   {
   	
   	 cout <<"Este � um tri�ngulo equil�tero!";
   	 
   }
   else 
   {
   	cout <<"Este � um tri�ngulo is�sceles!";
   }
}
