#include <iostream>
#include <locale>

using namespace std;


    //Exibe as op��es para o usu�rio
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
		
		//Vari�veis referentes aos produtos
		float trioEletrico, arEdirecao, arOudirecao, completo, 
		valorDeFabrica, valorTotal;
		//Vari�vel respons�vel por armazenar a escolha do usu�rio
		int opcoes;
		//Respons�vel por armazenar as strings
		char*acessorios;
		//Respons�vel por dar valor falso a vari�vel inv�lido
		bool invalido=false;
		
		//Solicita e armazena o valor de f�brica do autom�vel
		cout<<"Digite o valor de fabrica do carro";
		cin>>valorDeFabrica;
		
		//Estrutura de repeti��o pr�-teste
		do {
		    
		    //Exibe o menu de op��es para o usu�rio
		    menuOpcoes();
		    
		    //Solicita e armazena a op��o escolhida pelo usu�rio
		    cout<<"Digite a sua op��o";
		    cin>>opcoes;
		    
		    //Cada op��o � definida por um c�digo 
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
			   
			   //Caso o usu�rio escolha um c�digo que n�o faz parte do menu � retorna o default
				default:
		    	cout<<"Op��o inv�lida";
		    	invalido=true;
			}
			
			//S� ser� solicita ao usu�rio as op��es se o default for falso
			if(!invalido)
			{
				cout<<"Digite a sua op��o";
		    	cin>>opcoes;
			}
		
		//Enquanto o usu�rio escolher qualquer op��o difente de 5 as op��es continuam aparecendo
		//Caso contr�rio encerra o loop.
		}while(opcoes!=5);
		
		//Se a op��o escolhida pelo usu�rio for 0 retorna apenas o valor de f�brica
		if(opcoes == 0){
		  cout<<"O valor do autom�vel sem adicionais fica por apenas:"<<valorDeFabrica;
		  
		//Se a op��o escolhida pelo usu�rio for 1 retorna o valor do carro + 
		//2% do valor de f�brica + com 8% IPI
		}else if(opcoes == 1) {
		    trioEletrico = ((valorDeFabrica * 0.02) + (valorDeFabrica * 0.08) + valorDeFabrica);
		    cout<<"O valor do autom�vel com o trio el�trico:"<<trioEletrico;
		 
		//Se a op��o escolhida pelo usu�rio for 2 ou 3 retorna o valor do carro +
	    // 2% do valor de f�brica
		}else if(opcoes == 2 || opcoes == 3){
		    arOudirecao = ((valorDeFabrica * 0.02) + valorDeFabrica);
		    cout<<"O valor do autom�vel com o Ar Condicionado ou Dire��o hidr�lica �:"<<arEdirecao;
		
		//Se a op��o escolhida pelo usu�rio for 2 e 3 retorna o valor do carro +
	    // 2% do valor de f�brica de cada produto
		}else if(opcoes == 2 && opcoes == 3){
		    arEdirecao = ((valorDeFabrica * 0.04) + valorDeFabrica );
		    cout<<"O valor do autom�vel com o Ar Condicionado e Dire��o hidr�lica �:"<<arEdirecao;
		
		//Se a op��o escolhida pelo usu�rio for 4 retorna o valor do carro +
		//valor do carro + os pre�os acrescidos dos opcionais + o valor do IPI
		// com o desconto de 3.5%
		}else if(opcoes == 4){
		    completo = ((valorDeFabrica * 0.08) + trioEletrico + arEdirecao + valorDeFabrica)/0.035;
		    cout<<"O valor do autom�vel com o Ar Condicionado e Dire��o hidr�lica �:"<<completo;
		}
			
	}
	
	
	
	#include <iostream>
#include <locale>

using namespace std;


    //Exibe as op��es para o usu�rio
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
		
		//Vari�veis referentes aos produtos
		float trioEletrico, arCondicionado, arEDirecao, arOuDirecao,direcaoHidraulica, completo, 
		valorDeFabrica, valorTotal;
		//Vari�vel respons�vel por armazenar a escolha do usu�rio
		int opcoes;
		//Respons�vel por armazenar as strings
		char*acessorios;
		//Respons�vel por dar valor falso a vari�vel inv�lido
		bool invalido=false;
		
		//Solicita e armazena o valor de f�brica do autom�vel
		cout<<"Digite o valor de fabrica do carro";
		cin>>valorDeFabrica;
		
		//Estrutura de repeti��o pr�-teste
		do {
		    
		    //Exibe o menu de op��es para o usu�rio
		    menuOpcoes();
		    
		    //Solicita e armazena a op��o escolhida pelo usu�rio
		    cout<<"Digite a sua op��o";
		    cin>>opcoes;
		   
			}
			
			 if(opcoes == valorDeFabrica){
			    cout<<"O valor do autom�vel sem adicionais � por apenas:"<<valorDeFabrica;
			}else if(opcoes == trioEletrico){
			    trioEletrico = ((valorDeFabrica * 0.02) + (valorDeFabrica * 0.08) + valorDeFabrica);
			     cout<<"O valor do autom�vel com o trio el�trico:"<<trioEletrico;
			}else if(opcoes == arCondicionado || opcoes == direcaoHidraulica){
			    arOuDirecao = ((valorDeFabrica * 0.02) + valorDeFabrica);
		        cout<<"O valor do autom�vel com o Ar Condicionado ou Dire��o hidr�lica �:"<<arOuDirecao;
			}else if(opcoes == arCondicionado && opcoes == direcaoHidraulica){
			    arEDirecao = ((valorDeFabrica * 0.04) + valorDeFabrica );
		        cout<<"O valor do autom�vel com o Ar Condicionado e Dire��o hidr�lica �:"<<arEDirecao;
			}
			
		//Enquanto o usu�rio escolher qualquer op��o difente de 5 as op��es continuam aparecendo
		//Caso contr�rio encerra o loop.
		}while(opcoes!=5);
	}
	
