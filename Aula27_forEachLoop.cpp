#include<iostream>
//for-each imprime a estrutura de dados sem precisar acessar indice por indice, ideal quando so queremos imprimir um array
//como criar->for(tipo de dado da estrutura nome a sua escolha:nome da estrutura ){impressao}

int main() {
    std::string estudantes[]={"Miracle","Siswe","Calege","Jorge","Joana"};

    for (std::string estudante:estudantes) {
        std::cout<<estudante<<std::endl;
    }

    return 0;
}