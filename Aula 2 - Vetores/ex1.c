

int main(){

    float notas[10];
    int i;
    float soma = 0;
    for(i = 0;i < 10;i++){
        printf("Digite a nota %d: ",i+1);
        scanf("%f",&notas[i]);
        soma = soma + notas[i];
    }

    for(i = 0;i < 10;i++){
        printf("A nota %d: %.2f\n",i+1,notas[i]);
    }

    printf("A soma dos numeros : %.2f",soma);

    return 0;
}
