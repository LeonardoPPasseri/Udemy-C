/*
    Operadores nas condicionais

    >  -> Maior
    >= -> Maior ou igual
    <  -> Menor
    <= -> Menor ou igual
    == -> Identico
    != -> Diferente

*/

int main(){
    float nota1,nota2,media;
    char aluno[80];
    printf("Nome do aluno:");
    gets(aluno);
    fflush(stdin);

    printf("Digite as duas notas:");
    scanf("%f%f",&nota1,&nota2);

    media = (nota1+nota2)/2;

    if(media >= 6){
        printf("Parabens,%s. Aprovado!!",aluno);
    }
    else{
        printf("Reprovado...");
    }

    return 0;

}
