#include <iostream>
const int TAM =10;

int main(){
    //Busca Binária.
    int array[TAM] = {10,20,30,40,65,78,81,100,120,335}, oEscolhido;
    int extremidadeMenor = *array - *array , extremidadeMaior = *array -1;
    int meioAtual, i =0;
    bool achou = true;
    //define os pontos de extremidades
    //O pivot deve recorrer array usando a metade de sua totalidade como próximo passo
    std::cout <<"Escolha um Número dentro de :";
    for(int i = 0; i <= *array -1; i++){
        std::cout << array[i] << " ," ;
    }
    std::cin >> oEscolhido;
    while (achou){
        meioAtual = (extremidadeMenor + extremidadeMaior )/2;
        if (array[meioAtual] == oEscolhido || extremidadeMaior <= extremidadeMenor){
            achou = false;
            std::cout << array[meioAtual];
        }else if (oEscolhido < array[meioAtual]){
            extremidadeMaior = meioAtual;
        }else if (oEscolhido > array[meioAtual]){
            extremidadeMenor = meioAtual;
        }

    }
    return 0;
    }