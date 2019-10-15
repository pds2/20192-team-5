#ifndef CARTA_H
#define CARTA_H

class Carta{
    
    private:
        int cor;
        int numero;
    
    public:
        Carta(int _cor, int _numero);
        int get_cor();    
        int get_numero();
        void acao();
    
};
#endif