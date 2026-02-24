#include<iostream>


int main() {
    std::string estudantes[]={"Miracle","Siswe","Calege","Jorge","Joana"};

    for (int i=0;i<sizeof(estudantes)/sizeof(std::string);i++) {
        std::cout<<estudantes[i]<<std::endl;
    }//inves de imprimirmos de forma manual indice por indice(ex:std::cout<<estudantes[0]), usamos o sizeof(), para sabermos quantos elementos a estrutura tem e colocarmos numa estrutura de repeticao

    return 0;
}