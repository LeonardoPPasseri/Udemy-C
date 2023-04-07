
float calcular_media(float num1,float num2){
    float media;
    media = (num1+num2)/2.0;
    return media;
}

int main(){
    char aluno[60];
    float media;
    float num1,num2;

    printf("Digite o nome do aluno:");
    gets(aluno);
    fflush(stdin);

    printf("Digite as duas notas do aluno:");
    scanf("%f%f",&num1,&num2);

    media = calcular_media(num1,num2);

    printf("\nA media do aluno %s foi %.2f\n",aluno,media);

    return 0;
}