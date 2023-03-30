int main(){
    //Esse programa lê apenas UM caractere...
    char letra;

    printf("digite uma letra:");
    scanf("%c",&letra);

    printf("letra digitada: %c \n",letra);


    //Para apenas UM nome/palavra...
    char palavra[80];

    printf("digite uma palavra:");
    scanf("%s",&palavra[0]); //[0] significa que começa a ler apartir da primeira letra da palavra...
    //O comando scanf le apenas uma palavra...
    printf("A palavra digitada foi: %s \n",palavra);


    //Para frases...
    char nomecompleto[80];
    fflush(stdin); //Scanf + gets da errado...Precisa colocar o comando fflush...Limpeza do buffer de teclado
    printf("digite o nome completo:");
    gets(nomecompleto);

    printf("O nome completo foi: %s \n",nomecompleto);


}
