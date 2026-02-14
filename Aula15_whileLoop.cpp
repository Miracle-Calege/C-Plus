#include<iostream>

int main() {
    /*do while e while, sao estruturas de repeticao que diferem se num ponto:
     *do{}while(condicao);-> executa o bloco de codigo pelo menos uma vez e depois verifica
     *while(condicao){}->primeiro verifica a condicao so depois executa
     *
     */

    std::string nome;

    while (nome.empty()) {//enquanto a variavel nome estiver vazia a linha 8 e 9 serao executadas
        std::cout<<"Insira o seu nome:";
        std::getline(std::cin,nome);
    }

    int numero=0;
do {
  std:: cout<<"Insira um numero positvo";
    std::cin>>numero;
}while (numero<0);

    return 0;
}