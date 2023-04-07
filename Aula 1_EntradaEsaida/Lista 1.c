//ex1
int calcular_km(int inicio,int fim){
    int dif;
    dif = fim - inicio;
    return dif;
}

int main(){
    int inicio,fim;
    printf("Digite a quilometragem inicial e a final:");
    scanf("%d%d",&inicio,&fim);

    printf("A distancia percorrida foi: %d km",calcular_km(inicio,fim));
    return 0;
}

//ex2

float calcular_vol(float r,float h){
    float volume;
    volume = 3.14159 * r * r * h;
    return volume;
}

int main(){
    float volume,r,h;

    printf("Digite o raio e a altura:");
    scanf("%f%f",&r,&h);

    volume = calcular_vol(r,h);

    printf("Volume do cilindro:%.2f",volume);
    return 0;
}

//ex3

int main(){
    int nasc,atual,idade;

    int dias,horas,segundos;

    printf("Digite o ano de nascimento e ano atual:");
    scanf("%d%d",&nasc,&atual);

    idade = atual - nasc;

    dias = idade * 365;
    horas = dias * 24;
    segundos = horas * 3600;

    printf("\nIdade:%d\nDias:%d\nHoras:%d\nSegundos:%d\n",idade,dias,horas,segundos);

    return 0;

}

//ex4

int main(){
    float entrada,saida,saldo;


    printf("Digite a entrada e saida de dinheiro:");
    scanf("%f%f",&entrada,&saida);

    saldo = entrada - saida;

    printf("Saldo:%.2f reais",saldo);

    return 0;

}
