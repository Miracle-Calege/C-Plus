#include<iostream>

// namespace primeiro {//->permite criar variaveis com o mesmo nome :namespace"nomeEScolhido"{};namespaces sao criados acima do main()
//     int x=1;
// }
// namespace segundo{
//     int x=4;
// }

int main() {
    //int x=0;
    //using namespace primeiro;//->deixa claro que namespace esta a ser usado(na ausencia de variavel local no main(do mesmo nome que dos namespace))
    //std::cout<<x;//->se nao especificarmos o "x" sera impresso aquele que esta no main
    //std::cout<<primeiro::x;//->para imprimir o namespace especifico -nome do namespace ::variavel
    using namespace std;//quando usado nao precisamos de std para imprimir nem declarar strings
    string nome="Miracle";
    cout<<nome;
    //using std::string;//->somente para poder declarar strings sem o prefixo std
    //using std::cout;//->somente para imprimir sem o prefixo std
    return 0;
}