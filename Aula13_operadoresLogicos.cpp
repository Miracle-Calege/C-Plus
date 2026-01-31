#include <iostream>

//&&-> a condicao so sera verdadeira se todas forem verdadeiras
// ||->  a condicao sera verdadeira se pelo menos uma for
// !-> reverse o valor logico ex: !true==false  ou !false==true

int main() {
    int temp;

    // std::cout<<"Insira a temperatura";
    // std::cin>>temp;

    // if (temp >0 && temp <30) {
    //     std::cout<<"Temperatua boa";
    // }else {
    //     std::cout<<"Temperatura off";
    // }
    // if (temp <=0 || temp >=30) {
    //     std::cout<<"Temperatua boa";
    // }else {
    //     std::cout<<"Temperatura off";
    // }
    bool ensolarado=true;

    if (!ensolarado) {
        std::cout<<"E um dia ensolarado";
    }else{
        std::cout<<"nao e um dia ensolarado";// usando o !ensolarado essa mensagem sera impressa
    }


    return 0;
}