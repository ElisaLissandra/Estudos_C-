#include <iostream>
#include <locale>

using namespace std;

int main(){
	
	setlocale(LC_ALL, "ptb");
	
	float trioEletrico, arCondicionado, direcaoHidraulica, completo, calculo, valorCarro;
	int opcao;
	char*acessorios;
	bool invalido=false;
	
		cout<<"0 - Nenhuma das opções\n";
		
		cout<<"1 - Trio Elétrico(alarme, vidro elétrico e tranca elétrica)\n";
		
		cout<<"2 - Ar Condicionado\n";
		
		cout<<"3 - Direção hidráulica\n";
		
	    cout<<"4 - Completo(trio elétrico, ar condicionado e direção hidrálica)\n";
	    
	    cout<<"5 - Sair\n";
	
	do {
	
		switch(opcao){
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
	    	cout<<"Opção inválida";	
	    	invalido=true;
	    	
	    	break;
		}
		
		if(!invalido)
		{
			cout<<"Digite a(s) sua(s) opção";
	    	cin>>opcao;
		}
		
	}while(opcao!=5);
	
	

	
		
	
}
