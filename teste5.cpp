#include <iostream>
#include <locale>

using namespace std;



	void menuOpcoes(){
		
		setlocale(LC_ALL, "ptb");
		
		cout<<"0 - Nenhuma das op��es\n";
		
		cout<<"1 - Trio El�trico(alarme, vidro el�trico e tranca el�trica)\n";
		
		cout<<"2 - Ar Condicionado\n";
		
		cout<<"3 - Dire��o hidr�ulica\n";
		
	    cout<<"4 - Completo(trio el�trico, ar condicionado e dire��o hidr�lica)\n";
	    
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
		    
		    cout<<"Digite a(s) sua(s) op��o";
		    cin>>opcoes;
		
			switch(opcoes){
			    case 0:
					acessorios="Nenhuma das op��es";
			    break;
			  	
			    case 1:
			  	  acessorios="Trio El�trico(alarme, vidro el�trico e tranca el�trica)";
			    break;
			 	
			 	case 2:
			  	  acessorios="Ar Condicionado";
			    break;
			    
			     case 3:
			  	  acessorios="Dire��o hidr�ulica";
			    break;
			    
			    case 4:
			    	acessorios="Completo(trio el�trico, ar condicionado e dire��o hidr�lica)";
			    break;
			   
				default:
		    	cout<<"Op��o inv�lida";	
			}
			
		}while(opcoes!=5);
		
			
		
	}
