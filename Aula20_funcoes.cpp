#include<iostream>


void happyBirthday(std::string nome,int idade);//para criar funcoes depois da funcao main(embaixo) deve ser invocar primeiro a funcao em cima do main deve ser chamada contendo o tipo de retorno nome (parametros se tiver);

int main() {
    //funcao e um bloco de codigo reutilizavel, que pode ser chamado sempre que preciso
    /*uma funcao deve ter um nome descritivo do que ele faz
     *uma funcao deve ter um tipo de retorno void(nao retorna nada), int, double, etc
    criacao de uma funcao: retorno nome (parametros(opcional)){accao}
    parametro_>retorno variavel, argument-> uma variavel ja inicializada
    chama-se parametro durante a construcao da funcao e argumento na inicializacao da funcao, os nomes dos parametros e argumentos nao precisam ser os mesmo desde que sigam a mesma sequencia dos parametros(se  primeiros temos uma string como parametro, o primeiro argumento tambem deve ser uma string)
    para chamar/invocar a funcao e so ir ao metodo main e escrever o nome da funcao: funcao();

    */
    std::string nome="Siswe Calege";
    int idade=20;
happyBirthday(nome,idade);//argumento nome

    return 0;
}

void happyBirthday(std::string nome,int idade) {//parametro nome
    std::cout<<"Happy Birthday to you "<<nome<<std::endl;
    std::cout<<"Happy Birthday to you "<<nome<<std::endl;
    std::cout<<"Happy Birthday dear you "<<nome<<std::endl;
    std::cout<<"Happy Birthday to you "<<nome<<std::endl;
    std::cout<<"you are "<<idade <<" old";

}
