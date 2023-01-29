#include <iostream>
#include <locale>

using namespace std;


    //Exibe as opções para o usuário
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
		
		//Variáveis referentes aos produtos
		float trioEletrico, arEdirecao, arOudirecao, completo, 
		valorDeFabrica, valorTotal;
		//Variável responsável por armazenar a escolha do usuário
		int opcoes;
		//Responsável por armazenar as strings
		char*acessorios;
		//Responsável por dar valor falso a variável inválido
		bool invalido=false;
		
		//Solicita e armazena o valor de fábrica do automóvel
		cout<<"Digite o valor de fabrica do carro";
		cin>>valorDeFabrica;
		
		//Estrutura de repetição pré-teste
		do {
		    
		    //Exibe o menu de opções para o usuário
		    menuOpcoes();
		    
		    //Solicita e armazena a opção escolhida pelo usuário
		    cout<<"Digite a sua opção";
		    cin>>opcoes;
		    
		    //Cada opção é definida por um código 
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
			   
			   //Caso o usuário escolha um código que não faz parte do menu é retorna o default
				default:
		    	cout<<"Opção inválida";
		    	invalido=true;
			}
			
			//Só será solicita ao usuário as opções se o default for falso
			if(!invalido)
			{
				cout<<"Digite a sua opção";
		    	cin>>opcoes;
			}
		
		//Enquanto o usuário escolher qualquer opção difente de 5 as opções continuam aparecendo
		//Caso contrário encerra o loop.
		}while(opcoes!=5);
		
		//Se a opção escolhida pelo usuário for 0 retorna apenas o valor de fábrica
		if(opcoes == 0){
		  cout<<"O valor do automóvel sem adicionais fica por apenas:"<<valorDeFabrica;
		  
		//Se a opção escolhida pelo usuário for 1 retorna o valor do carro + 
		//2% do valor de fábrica + com 8% IPI
		}else if(opcoes == 1) {
		    trioEletrico = ((valorDeFabrica * 0.02) + (valorDeFabrica * 0.08) + valorDeFabrica);
		    cout<<"O valor do automóvel com o trio elétrico:"<<trioEletrico;
		 
		//Se a opção escolhida pelo usuário for 2 ou 3 retorna o valor do carro +
	    // 2% do valor de fábrica
		}else if(opcoes == 2 || opcoes == 3){
		    arOudirecao = ((valorDeFabrica * 0.02) + valorDeFabrica);
		    cout<<"O valor do automóvel com o Ar Condicionado ou Direção hidrálica é:"<<arEdirecao;
		
		//Se a opção escolhida pelo usuário for 2 e 3 retorna o valor do carro +
	    // 2% do valor de fábrica de cada produto
		}else if(opcoes == 2 && opcoes == 3){
		    arEdirecao = ((valorDeFabrica * 0.04) + valorDeFabrica );
		    cout<<"O valor do automóvel com o Ar Condicionado e Direção hidrálica é:"<<arEdirecao;
		
		//Se a opção escolhida pelo usuário for 4 retorna o valor do carro +
		//valor do carro + os preços acrescidos dos opcionais + o valor do IPI
		// com o desconto de 3.5%
		}else if(opcoes == 4){
		    completo = ((valorDeFabrica * 0.08) + trioEletrico + arEdirecao + valorDeFabrica)/0.035;
		    cout<<"O valor do automóvel com o Ar Condicionado e Direção hidrálica é:"<<completo;
		}
			
	}
	
	
	
	#include <iostream>
#include <locale>

using namespace std;


    //Exibe as opções para o usuário
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
		
		//Variáveis referentes aos produtos
		float trioEletrico, arCondicionado, arEDirecao, arOuDirecao,direcaoHidraulica, completo, 
		valorDeFabrica, valorTotal;
		//Variável responsável por armazenar a escolha do usuário
		int opcoes;
		//Responsável por armazenar as strings
		char*acessorios;
		//Responsável por dar valor falso a variável inválido
		bool invalido=false;
		
		//Solicita e armazena o valor de fábrica do automóvel
		cout<<"Digite o valor de fabrica do carro";
		cin>>valorDeFabrica;
		
		//Estrutura de repetição pré-teste
		do {
		    
		    //Exibe o menu de opções para o usuário
		    menuOpcoes();
		    
		    //Solicita e armazena a opção escolhida pelo usuário
		    cout<<"Digite a sua opção";
		    cin>>opcoes;
		   
			}
			
			 if(opcoes == valorDeFabrica){
			    cout<<"O valor do automóvel sem adicionais é por apenas:"<<valorDeFabrica;
			}else if(opcoes == trioEletrico){
			    trioEletrico = ((valorDeFabrica * 0.02) + (valorDeFabrica * 0.08) + valorDeFabrica);
			     cout<<"O valor do automóvel com o trio elétrico:"<<trioEletrico;
			}else if(opcoes == arCondicionado || opcoes == direcaoHidraulica){
			    arOuDirecao = ((valorDeFabrica * 0.02) + valorDeFabrica);
		        cout<<"O valor do automóvel com o Ar Condicionado ou Direção hidrálica é:"<<arOuDirecao;
			}else if(opcoes == arCondicionado && opcoes == direcaoHidraulica){
			    arEDirecao = ((valorDeFabrica * 0.04) + valorDeFabrica );
		        cout<<"O valor do automóvel com o Ar Condicionado e Direção hidrálica é:"<<arEDirecao;
			}
			
		//Enquanto o usuário escolher qualquer opção difente de 5 as opções continuam aparecendo
		//Caso contrário encerra o loop.
		}while(opcoes!=5);
	}
	
