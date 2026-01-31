#include <iostream>

//operador ternario e uma forma simplificada de usar if's, usado para condicoes menos extensas/longas
//como usar -> condicao? accao1(accao ser for verdadeira):accao2(accao se for falsa)
int main() {

    int nota=20;

    nota>=10 ? std::cout<<"Passou"<<'\n' :std::cout<<"Chumbou"<<'\n';

    nota % 2? std::cout<<"Par"<<'\n':std::cout<<"impar"<<'\n';

    bool fome=false;//para bool nao precisamos de escrever fome==true/false, o compilador sempre entende que o bool e true

   // fome?  std::cout<<"Estou com fome"<<'\n': std::cout<<"Nao estou com fome"<<'\n';

    std::cout<<(fome? "Estou com fome": "Nao estou com fome");//->outra forma mais simplificada de imprimir usado operadores ternarios
    return 0;
}