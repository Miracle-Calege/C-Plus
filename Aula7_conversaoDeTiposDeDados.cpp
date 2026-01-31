#include<iostream>

//casting pode ser feito de forma implicita(automaticamente ) pelo compuatdor
//explicita pelo programador


int main() {

    int x=3.14;//-> o compilador (implicitamente)vai converter o double para int(guardando apenas o 3)
    double y=(int) 3.14;//-> forco o compilador a converter o 3.14 para int
    std::cout<<x<<'\n';
    std::cout<<y<<'\n';

    char z=100;//-> o z vai ser implicitamente convertida para o seu equivalente na tabela de ASCII code(sera d)

    std::cout<<z<<'\n';
    std::cout<<(char) 100;//->conersao explicita

    return 0;

}