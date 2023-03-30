//numeros inteiros

int main(){
    //Regra das variaveis -> Apenas LETRAS no começo...N pode ter espaços na variavel...
    //int -> Numeros inteiros
    int valorA,valorB,res;

    printf("Digite um valor:");
    scanf("%d",&valorA); //%d entre aspas e com virgula... & para endereçar o dado...
    printf("Digite outro valor:");
    scanf("%d",&valorB);

    res = valorA + valorB;

    printf("A soma de %d e %d resulta em: %d \n",valorA,valorB,res); // \n é para quebra de linha

    return 0;
}

//Numeros reais

int main(){

    //float -> numeros reais(poucos numeros apos a virgula)
    //double -> numeros reais (muitos numeros apos a virgula)
    float valorA,valorB,res;

    printf("Digite o primeiro valor:");
    scanf("%f",&valorA);
    printf("Digite outro valor:");
    scanf("%f",&valorB);

    res = (valorA + valorB)/2;

    printf("a media entre %.2f e %.2f resulta em: %.2f \n",valorA,valorB,res);


    return 0;
}

//Operadores Aritmeticos

int main(){  
    int somar,diminuir,multiplicar,dividir,resto;
    int valorA,valorB;

    printf("Digite o primeiro valor:");
    scanf("%d",&valorA);
    printf("Digite outro valor:");
    scanf("%d",&valorB);

    somar = valorA + valorB;
    diminuir = valorA - valorB;
    multiplicar = valorA * valorB;
    dividir = valorA / valorB;
    resto = valorA % valorB;

    printf(" Soma:%d \n Diminuir:%d \n Multiplicar: %d \n Dividir: %d \n Resto: %d \n", somar,diminuir,multiplicar,dividir,resto);
    return 0;
}
