#include<iostream>
/*array e uma estrutura que pode guardar varios valores do mesmo tipo de dado e que estes podem ser acessados pelos seus indices(os indices inicial por 0, e o ultimo sera o tamanho do array-1)
 *criar e inicializar->tipo de dado nome para o array[]={dado1,dado2,dado3,..};
 *para mudar um certo dado ->nome do array[indice]=novo dado;
 *criar e inicializar depois-> tipo de dado ome para o array[tamanho];
 */

int main() {
    std::string carros[]={"G-Wagon","Maybach","Rolls & Royce"};
    carros[0]="Ferrari";//agora o primeiro carro da estrutura sera Ferrari

    std::cout<<carros[0]<<'\n';
    std::cout<<carros[1]<<'\n';
    std::cout<<carros[2]<<'\n';

    double precos[4];
    precos[0]=5.00;
    precos[1]=7.59;
    precos[2]=9.99;
    precos[3]=15.00;

    std::cout<<precos[0]<<'\n';
    std::cout<<precos[1]<<'\n';
    std::cout<<precos[2]<<'\n';
    std::cout<<precos[3]<<'\n';



    return 0;
}