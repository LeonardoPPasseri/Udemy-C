int main(){


    float notas[6]; //Declarando um vetor
    int i;
    float media = 0;

    for(i = 0; i < 6;i++){        // Lendo os dados para um vetor
        printf("Digite a nota %d: ",i+1);
        scanf("%f",&notas[i]);
        media = media + notas[i]; //Somando as notas
    }

    for(i = 0; i < 6;i++){        //Mostrando as notas do vetor
        printf("Nota armazenada (%d): %.2f \n",i+1, notas[i]);
    }

    printf("A media das notas apresentadas foi: %.2f", media/6); //Calculando e
                                                                 // mostrando a media
    return 0;
}
