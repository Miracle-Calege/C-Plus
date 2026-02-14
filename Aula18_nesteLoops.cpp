#include<iostream>

int main() {
    //nested loop-> uma estrutura de repeticao dentro da outra, a estrutura exterior(a primeira) vai determinar quantas vezes a estrutura interior(a segunda) sera repetida


    for (int i=1;i<=3;i++) {
        for (int j=1;j<=10;j++) {
            std::cout<<j<<' ';
        }
        std::cout<<'\n';
    }

    return 0;
}