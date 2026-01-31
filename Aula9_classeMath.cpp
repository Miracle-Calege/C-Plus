#include <iostream>
#include<cmath>//permite-nos usar algumas funcoes matematicas

//std::max(x,y)->retorna o maior valor entre dois valores
//std::min(x,y)->retorna o menor valor entre dois valores

//estes abaixo sao possiveis de ser acessados se incluirmos a biblioteca #include<cmath>
//pow(base,expoente)->retorna o resultado de uma potencia
//sqrt(x)->retorna a raiz quadrada de um valor
//abs(-x)->retorna o valor absoluto de um valor
//round(x)-> faz um arredondamente convencional de um valor
//ceil(x)->faz um arredondamenti para cima
//floor(x)-> faz um arredondamento para baixo

int main() {
    double x=3;
    double y=4;
    double z;
    //z=std::max(x,y);
    //z=std::min(x,y);
    //z=pow(x,y);
    //z=sqrt(x);
    //z=abs(-3);
    //z=round(3.1415926535897932384626433);
    //z=ceil(3.14);
    z=floor(3.14);

    std::cout<<z;




    return 0;
}