#include <iostream>

/*Variavel local->visivel apenas no metodo em que foi criado
 *variavel global->criada na classe e visivel para todos os metoodos da classe
 */

int num=3;//variavel global

void imprimir();

int main() {
int num=1;//as variaveis globais e locais podem partilhar o nome porque estao em escopos diferentes
    imprimir();//este metodo vai imprimir 2 porque da prioridade a variavel local(que foi criada no metodo imprimir)
    //std::cout<<num<<'\n';
    std::cout<<::num<<'\n';//para forcar o uso da variavel global colocamos "::"antes da variavel



    return 0;
}

void imprimir() {
    int num=2;
    //std::cout<<num<<'\n';
    std::cout<<::num<<'\n';
}


