#include <iostream>
#include <locale>
using namespace std;
int main() 
{
	setlocale(LC_ALL, "ptb");
	
	int num, quadrado;
	
	cout<<"Informe um número qualquer:";
	cin>>num;
	quadrado = num * num;
	if(quadrado >= 25){
		cout<<"É maior ou igual  a 25.";
	}
}
