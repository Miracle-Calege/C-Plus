#include <iostream>

//para aceitar dados via teclado usamos std:: cin>> variavel;(mas indicado para ler valores numericos e strings sem espacos)
//para strings com espacos usamos: std::getline(std::cin,variavel)
int main() {

    std::string nome;
    int idade;
    std::cout<<"Quantos anos tens?: "<<'\n';
    std::cin>>idade; //quando recebemos primeiro dados de valores numericos e em seguida dados do tipo string quando clicamos enter apos inserir o valor numerico o
    //compilador vai concluir que o whitespace causado pelo enter e string e nao teremos como colocar o texto/string a nossa escolha
    //nesses casos o std::getline(std::cin>>std::ws,nome); fica assim
    std::cout<<"Como te chamas?: ";
    std::getline(std::cin>>std::ws,nome);
    //std::cin>>nome;
    //std::getline(std::cin,nome);
    // std::cout<<"Quantos anos tens?: "<<'\n';
    // std::cin>>idade;

    std::cout<<"Kmk "<<nome<<", "<<"tu tens "<<idade <<" anos de idade";


    return 0;
}