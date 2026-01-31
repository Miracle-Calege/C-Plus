#include <iostream>


//typedef->usado para redefinir o nome de um tipo de dado

//typedef std::string texto;//-> para criar uma typedef :typedef tipo de dado nome a sua escolha;
//agora tudo que for declarado do tipo text_t tera que ser string
//tambem pode se usar using para o mesmo fim
//using nome a sua escolha=tipo de dado;

using texto=std::string;
using numero=int;

typedef  int numero;
int main() {

    texto nome="Miracle";//inicializando/declarando :typedef nome a sua escolha;
    numero age=20;

    std::cout<< nome<<'\n';
    std::cout<< age<<'\n';

return 0;
}


