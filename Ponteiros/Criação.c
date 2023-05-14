// A ideia do ponteiro serve para que possamos estabelecer uma relação mais proxima entre
// as FUNÇÕES e a MAIN;
// A ideia é que possamos passar da função para a main ou da main para a função o endereço 
// em que está a informação;
// Com isso, a informação pode ser alterada, por exemplo, na função e a main receber essa 
// mudança sem termos que atualiza-la manualmente;

// & do scanf - Serve para ARMAZENAR a informação em um endereço de memoria
// EXEMPLO 

int main(){
    int c;
    printf("Digite um numero: ");
    scanf("%d",&c); //Traduzindo == O numero "%d" será guardado no endereço de memoria &c;
}

// Para criamos um PONTEIRO devemos criar uma variavel e usar-mos o * a esquerda; 
int *ponteiro;

// Significa que essa variavel aponta para um ENDEREÇO que no caso é um numero inteiro(int);
// PONTEIRO SÓ ARMAZENA ENDEREÇO DE MEMORIA;
// ENTÃO

int numero;
int *ponteiro;

ponteiro = &numero; //Agora a variavel "ponteiro" armazenou o endereço de memoria da variavel "numero"

// N precisa colocar o * denovo

//Usa-se o %p para exibir um ponteiro
int main(){
    printf("O endereço de memoria é: %p", ponteiro); //Mostra o endereço armazenado;
}
int main(){
    printf("O endereço de memoria é: %p", *ponteiro); //Mostra o valor armazenado no endereço;
}

//OBS --> O ponteiro tb tem endereço proprio! e diferente do que foi armazenado

// ("%p", p) diferente de ("%p", &p)