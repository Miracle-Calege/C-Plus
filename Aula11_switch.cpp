#include <iostream>


//switch()-> uma alternativa para nao usar muitos if's
// o switch leva em argumento que e verificado nos cases
//switch () pode seer usado com qualquer tipo de dado
int main () {

    int mes;

    std::cout<<"Insira um numero 1-12:";
    std::cin>>mes;

    switch (mes) {
        case 1://caso o valor no argumento de switch for 1
            std::cout<<"Janeiro";// janeiro sera impressao
            break;//se for janeiro o programa para
        case 2:
            std::cout<<"Fevereiro";
            break;
        case 3:
            std::cout<<"Marco";
            break;
        case 4:
            std::cout<<"Abril";
            break;
        case 5:
            std::cout<<"Maio";
            break;
        case 6:
            std::cout<<"Junho";
            break;
        case 7:
            std::cout<<"Julho";
            break;
        case 8:
            std::cout<<"Agosto";
            break;
        case 9:
            std::cout<<"Setembro";
            break;
        case 10:
            std::cout<<"Outubro";
            break;
        case 11:
            std::cout<<"Novembro";
            break;
            case 12:
            std::cout<<"Dezembro";
            break;
            default://caso  a entrada esteja fora do intervalo (1-12)
            std::cout<<"Insira numero no intervalo (1-12)";//esta mensagem sera impressa
    }






    return 0;
}