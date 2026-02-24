#include<iostream>

//sizeof()->determina o tamanho em bytes de variaveis, tipos de dados,classes,objectos,etc

int main() {

    double pontuacao=2.5;
    std::string nome="Miracle";
    char letra='F';
    bool estudante=true;
    char letras[]={'A','B','C','D','F'};

    std::cout<<sizeof(pontuacao)<<" bytes\n";
    std::cout<<sizeof(nome)<<" bytes\n";
    std::cout<<sizeof(letra)<<" bytes\n";
    std::cout<<sizeof(estudante)<<" bytes\n";

    std::cout<<sizeof(letras)/sizeof(char)<<" elementos\n";//tamanho do array/tamanho de um elemento do array/do tipo de dado =tamanho do array


    /*se uma variavel do tipo int tiver um valor de 3bytes, significa que todos int tem um valor de 3bytes(essa analogia e valida para todos os tipos de dados primitivos)
     *
     */


    return 0;
}
