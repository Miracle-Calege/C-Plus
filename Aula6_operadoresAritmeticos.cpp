#include<iostream>


int main() {
    int qt=20;
    // 1           2         3
   // qt=qt+1;//ou qt+=1 ou qt++ ->adicao
   // qt=qt-1;//ou qt-=1 ou qt-- ->subtraccao
     //qt=qt*2;//qt*=2;->multiplicao
    //qt=qt/2;//qt/=2;
    int resto= qt%3;//"%" usado para ter o resto da divisao
    //para a coluna dois faz-se a variavel sinal(+,-,*,/) e igualdade(=) valor a operar


    std::cout<<qt<<'\n';
    std::cout<<resto<<'\n';


    return 0;
}