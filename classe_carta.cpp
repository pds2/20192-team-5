#include <iostream>

Class Carta{
    
    Private:
    Cor _cor;
    int numero;
    string acao;
    
    Public:
    Carta(string cor, int numero, string acao);
    
    Cor get_cor(){
    	return _cor;
    }   

    int get_numero(){
    	return numero;
    }

    string get_acao(){
    	return acao;
    }
    
}