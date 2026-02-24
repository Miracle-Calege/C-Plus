#include<iostream>

/*Overloaded methods-> usa o mesmo nome do metodo com quantidade de parametros diferentes e assinaturas diferentes(accoes)
 *
 */

void fazerPizza();
void fazerPizza(std::string cobertura1);
void fazerPizza(std::string cobertura1,std::string cobertura2);

int main() {
    fazerPizza();
    fazerPizza("queijo");
    fazerPizza("queijo","chourico");



    return 0;
}

void fazerPizza() {
    std::cout<<"Aqui esta a sua pizza!\n";
}
void fazerPizza(std::string cobertura1) {
    std::cout<<"Aqui esta a sua pizza de "<< cobertura1 <<'\n';
}
void fazerPizza(std::string cobertura1,std::string cobertura2) {
    std::cout<<"Aqui esta a sua pizza  de "<< cobertura1<< " e "<<cobertura2 <<'\n';
}
