#include<iostream>

int main() {

    srand(time(NULL));//reponsavel por alterar a seed para que o rand() possa gerar valores aleatorios

    // int numero=rand();//gerador de numeros aleatorios
    int numero=(rand()%6)+1;//para incluir o 6 colocamos a funcao entre parenteses e acrescentamos por 1
    //para colocarmos o intervalo de numero que queremos devemos usar rand() % valor(o rand() vai geral valores partido de 0 ate valor-1)
    std::cout<<numero;

    return 0;
}