#include<iostream>

int main() {
    std::string nome;

    std::cout<<"Insira o seu nome:";
    std::getline(std::cin,nome);
    /*um metodo geralmente termina por (), e para ser usado geralmente a estrutura e:variavel.metodo();
     *length()-> retorna o tamanho de uma string
     *empty()-> retorno do tipo bool, verifica se string esta vazia ou nao
     *clear()->esvazia a string
     *append(conteudo a ser anexado)-> anexa uma string no final da outra
    at(indice)-> acessa o elemento de uma string no determinado caracter
    *insert(indice,string)-> inssere uma determinada string no indice dado
    *find(caracter)-> retorna a indice do caracter dado
    *erase(indice incial,indice final)->elimina alguns caracteres de um strings num dado intervalo [indice inical,indice final[
    *
     */

    if (nome.length()>12) {
        std::cout<<"O teu nome nao pode ter acima de 12 letras";
    }else {
        std:: cout<<"Bem vindo " <<nome<<std::endl;
    }
    if (nome.empty()) {
        std::cout<<"Nao inseriou o seu nome";
    }else {
        std:: cout<<"Bem vindo " <<nome<<"\n";
    }
    nome.append("@gmail.com");
    std:: cout<<"Bem usuario " <<nome<<"\n";
    std:: cout<<"Caracter " <<nome.at(0)<<"\n";
    nome.insert(0,"@");
    std:: cout<<"Bem vindo " <<nome<<"\n";
    std:: cout<<"Indice" <<nome.find('m')<<"\n";
    nome.erase(0,3);
    std:: cout<<"Bem vindo " <<nome<<"\n";
    nome.clear();
    std:: cout<<"Bem vindo " <<nome<<"\n";


    return 0;
}