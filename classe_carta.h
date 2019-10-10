#ifndef Carta_h
#define Carta_h

CLass Carta{
    
    Private:
    Cor _cor;
    int numero;
    string acao;
    
    Public:
    Carta(string cor, int numero, string acao);
    
    Cor get_cor();    
    int get_numero();
    string get_acao();
    
}
#endif