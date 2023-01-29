#include <iostream>
#include <locale>

using namespace std;



	void menuOpcoes(){
		
		setlocale(LC_ALL, "ptb");
		
		cout<<"0 - Nenhuma das opções\n";
		
		cout<<"1 - Trio Elétrico(alarme, vidro elétrico e tranca elétrica)\n";
		
		cout<<"2 - Ar Condicionado\n";
		
		cout<<"3 - Direção hidráulica\n";
		
	    cout<<"4 - Completo(trio elétrico, ar condicionado e direção hidrálica)\n";
	    
	    cout<<"5 - Sair\n";
	}

	int main(void){
		
		float trioEletrico, arCondicionado, direcaoHidraulica, completo, valorDeFabrica, valorTotal;
		int opcoes;
		char*acessorios;
	
		
		do {
			
			 menuOpcoes();
		    cin>>opcoes;
			
			cout<<"Digite o valor de fabrica do carro";
		    cin>>valorDeFabrica;
		    
		    cout<<"Digite a(s) sua(s) opção";
		    cin>>opcoes;
		
			switch(opcoes){
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
			}
			
		}while(opcoes!=5);
		
			
		
	}
