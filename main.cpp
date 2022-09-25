#include <iostream>
const int TAM =10;

int Buscar(int alvo, int array[]){
    int extremidadeMenor = *array - *array , extremidadeMaior = *array, pivot;
    bool achouAlvo = true;

    while (achouAlvo){
        pivot = (extremidadeMenor + extremidadeMaior )/2;
        //O pivot deve recorrer array usando a metade de sua totalidade como próximo passo.
        if (array[pivot] == alvo || extremidadeMaior <= extremidadeMenor){
            achouAlvo = false;
            std::cout << array[pivot];
        }else if (alvo < array[pivot]){
            extremidadeMaior = pivot;
        }else if (alvo > array[pivot]){
            extremidadeMenor = pivot;
        }
        //conjunto de verificações.

    }
      //loop alterando as posições das extremidade(maior e menor) e do cursor(pivot) até acharem o valor ou até as extremidades se cruzarem
return array[pivot];
}

int main(){
    //Busca Binária.
    int array[TAM] = {10,20,30,40,65,78,81,100,120,335}, alvo, resultado;
    //define os pontos de extremidades
    std::cout <<"Escolha um Número dentro de :";
    for(int i = 0; i <= *array -1; i++){
        std::cout << array[i] << " ," ;
    }
    std::cin >> alvo;
    resultado = Buscar(alvo, array);
    return 0;
    }