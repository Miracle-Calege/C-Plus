#include<iostream>
//metodos diferente de void no seu final devem retornar algum valor usando a keyword return
double quadrado(double comprimento);

int main() {

    double comprimento=6.0;
    double area=quadrado(comprimento);
   std::cout<<"A area do quadrado e "<<area;

    return 0;
}

double quadrado(double comprimento) {
    return comprimento*comprimento;//o valor deste produto sera recuperado assim que esse metddo vor invocado

}
