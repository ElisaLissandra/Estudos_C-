#include <iostream>
#include <locale>
using namespace std;

int main(){
	
    setlocale(LC_ALL, "ptb"); 
    
	float trioEletrico, arCondicionado, direcaoHidraulica, completo, calculo;
	int opcao;
	char*acessorios;
	
	
		cout<<"0 - Nenhuma das opções\n";
		
		cout<<"1 - Trio Elétrico(alarme, vidro elétrico e tranca elétrica)\n";
		
		cout<<"2 - Ar Condicionado\n";
		
		cout<<"3 - Direção hidráulica\n";
		
	    cout<<"4 - Completo(trio elétrico, ar condicionado e direção hidrálica)\n";
	    
	    cout<<"5 - Sair\n";
	    
	    
	   
	
	
	do{
		
		
		 cout<<"Digite a(s) sua(s) opção";
	    cin>>opcao;
		switch(opcao)
	{
	  case 0:
				acessorios="Nenhuma das opções";
		    break;
		  	
		    case 1:
		  	  acessorios="Trio Elétrico(alarme, vidro elétrico e tranca elétrica)";
		    break;
		 	
		 	case 2:
		  	  acessorios="Ar Condicionado";
		    break;
		    
		     case 3:
		  	  acessorios="Direção hidráulica";
		    break;
		    
		    case 4:
		    	acessorios="Completo(trio elétrico, ar condicionado e direção hidrálica)";
		    break;
	    
	    default:
	    	cout<<"Mes invalido";
	    
	    	
	}
	
	}while(opcao!=5);
	
}
