//1_ Passagem de parametro por VALOR
void imprimir(int num){
    printf("Numero: %d", num);
    num = 80;
}
int main(){
    int idade = 23;
    imprimir(idade);
    return 0;
}

//2_ Passagem de parametro por referência
void imprimir(int *num){            //4_Função em que o parametro é um ponteiro
    printf("Numero: %d", *num);     //5_Para printar o valor de valor atribuido usa-se o *
    *num = 80;                      //6_Alterando o valor que esta no endereço
}
int main(){                         //1_inicio
    int idade = 23;                 //2_declarei a variavel
    imprimir(&idade);               //3_chamei a função e enviei como parametro o ENDEREÇO 
    printf("\nNumero: %d",idade);   //7_Printa o valor que esta contido no endereço com valor alterado
    return 0;
}

