#include <iostream>

using namespace std;

int main()

{

int codigo, qtde;

float valor=0;

char *item;

cout <<"*** Card�pio ***\n";

cout <<"100 � Hamb�rguer � R$5,50\n";

cout <<"101 � Cachorro-quente � R$4,50\n";

cout <<"102 � Milkshake � R$7,00\n";

cout <<"103 � Pizza brotinho � R$8,00\n";

cout <<"104 - Cheeseburguer � R$8,50\n";

cout <<"Informe o c�digo do seu pedido: ";

cin >>codigo;

cout <<"Informe a quantidade desejada: ";

cin >>qtde;

switch (codigo)

{

case 100:

item="Hamb�rguer";

valor = qtde * 5.50;

break;

case 101:

item="Cachorro-quente";

valor = qtde * 4.50;

break;

case 102:

item="Milkshake";

valor = qtde * 7.00;

break;

case 103:

item="Pizza brotinho";

valor = qtde * 8.00;

break;

case 104:

item="Cheeseburguer";

valor = qtde * 8.50;

break;

default:

cout <<"Pedido inv�lido!";

}

cout <<qtde << " x " << item << " = " << valor;

}
