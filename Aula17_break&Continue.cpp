#include<iostream>

int main() {
    //break-> para o loop
    //continue-> salta uma iteracao do loop
    for (int i=0;i<=20;i+=2) {
    if (i==14) {//assim que i ==14 o loop vai parar(nao alcancara os valores posteriores 16,18,etc)
        break;
    }
        std::cout<<i<<" ";
    }
    std::cout<<"\n";
    for (int i=0;i<=20;i+=2) {
        if (i==14) {//apenas o 14 sera ignorado e os de mais valores serao alcancados
            continue;
        }
        std::cout<<i<<" ";
    }


    return 0;
}