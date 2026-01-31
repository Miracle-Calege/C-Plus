#include<iostream>

//if-> condicao se a condicao for cumprida certa accao vai acontecer caso nao ,nenhuma accao ou outra vai acontecer(else/else if)


int main() {
int idade;

    std::cout<<"Insira a sua idade:";
    std::cin>>idade;
    // if (idade>=18) {
    //     std::cout<<"Es maior de idade";
    // }//se a condicao for cumprida a mensagem sera impressao, se nao for, nada acontecera

    // if (idade>=18) {
     //     std::cout<<"Es maior de idade";
     // }else {//quando a primeira condicao nao e cumprida, a mensagem abaixo sera impressa
     //     std::cout<<"Es menor de idade";
    // }

    if (idade>=100) {
        std::cout<<"Es demasiado velho";
    }else if (idade>=18) {
        std::cout<<"Es maior de idade";
    }else if (idade <0) {//else if usado para verificar outra condicao
        std::cout<<"Ainda gatinhas se e que ja nasceste";
    // }else if (idade>=100) {
    //     std::cout<<"Es demasiado velho";// se essa condicao permanecer aqui
            //  std::cout<<"Es demasiado velho"; nunca sera executado e no seu lugar sera executado std::cout<<"Es maior de idade";
    //e importante organizar os if's de forma hierarquica
    }else {
        std::cout<<"Es menor de idade";
    }

    return 0;
}