#include <iostream>

double getTotal(double precos[],int size);//para colocar um array como parametro de um metodo e so colocar o tipo de dado nome da estrutura[]

int main() {
    double precos[]={49.99,15.05,75,9.99};
    int size=sizeof(precos)/sizeof(double);
    double total=getTotal(precos,size);//quando o array esta como parametro nao colocamos "[]"
        std::cout<<"$"<<total;

    return 0;
}

double getTotal(double precos[],int size) {//em c++ as estruturas de dados ficam guardados num ponteiro(endereco de memoria), nao e possivel saber quantos elementos a estrutura tem, por isso devemos adicionar o tamanho da estrutura como parametro
    double total=0;
    for (int i=0;i<size;i++) {
        total+=precos[i];
    }
    return  total;
}
