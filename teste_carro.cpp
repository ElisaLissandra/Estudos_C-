#include <iostream>
#include <locale>
using namespace std;

int main(){
	
    setlocale(LC_ALL, "ptb"); 
    
	float trioEletrico, arCondicionado, direcaoHidraulica, completo, calculo;
	int opcao;
	char*acessorios;
	
	
		cout<<"0 - Nenhuma das op��es\n";
		
		cout<<"1 - Trio El�trico(alarme, vidro el�trico e tranca el�trica)\n";
		
		cout<<"2 - Ar Condicionado\n";
		
		cout<<"3 - Dire��o hidr�ulica\n";
		
	    cout<<"4 - Completo(trio el�trico, ar condicionado e dire��o hidr�lica)\n";
	    
	    cout<<"5 - Sair\n";
	    
	    
	   
	
	
	do{
		
		
		 cout<<"Digite a(s) sua(s) op��o";
	    cin>>opcao;
		switch(opcao)
	{
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
	    	cout<<"Mes invalido";
	    
	    	
	}
	
	}while(opcao!=5);
	
}
