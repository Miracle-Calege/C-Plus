#include <iostream>

int main() {
    //int-inteiros(variaveis desse tipo so armazena numeros inteiros)
  int idade;//->declaracao
    idade=20;//->incializacao
    std::cout<<idade<< '\n';
    //double ->numeros deciamais
    double preco=10.99;
    std::cout<<preco<<'\n';
    //char->carateres
    char inicial='M';
    std::cout<<inicial<<'\n';
    //bool->valores logicos(true/false1/0)
    bool estudante=false;
    std::cout<<estudante<<'\n';
    //string->conjunto de caracteres
    std::string nome="Miracle";//->declaracao de uma strin std::string "nomeVariavel"="texto";
    std::cout<<nome<<'\n';

    std::cout<<"Ola "<<nome<<'\n';//-> se quisermos imprimir um texto e depois uma variavel devemos separa o texto e a por "<<"
    std::cout<<"Tu tens "<<idade << " anos";//=> "<<" == "+" em java ou "," em c
    return 0;
}