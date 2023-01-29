#include <iostream>
#include<locale>

using namespace std;


int main() {
	setlocale(LC_ALL, "ptb"); 
	
	int code, quantidade;
	char *item;
	float calculo=0;
	
	cout<<"*** Cardápio ***\n";
	
	cout<<"100 – Hambúrguer – R$5,50\n";
	
	cout<<"101 – Cachorro-quente – R$4,50\n";
	
	cout<<"102 – Milkshake – R$7,00\n";
	
	cout<<"103 – Pizza brotinho – R$8,00\n";
	
	cout<<"104 - Cheeseburguer – R$8,50\n";
	
	cout<<"Digite o código do seu pedido:";
	cin>>code;
	
	cout<<"Digite a quantidade:";
	cin>>quantidade;
	
	switch(code)
	{
		case 100:
			
			item="Hambúrguer";
			calculo= quantidade * 5.50;
			
		break;
		
		case 101: 
			
			item="Cachorro-quente";
		
			calculo = quantidade * 4.50; 
		break;
		
		case 102:
			item="Milkshake";
			calculo= quantidade * 7.00; 
		break;
		
		case 103:
			item="Pizza brotinho";
			calculo= quantidade * 8.00;
		break;
		
		case 104:
			item="Cheeseburguer";
			calculo= quantidade * 8.50;
		break;	
		
		default:
			cout<<"Pedido inválido";
		
	}
	
    cout <<quantidade << " x " << item << " = " << calculo;
}
