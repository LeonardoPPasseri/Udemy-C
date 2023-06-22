// Definição da struct
struct depto {
    int qtd;
    float soma;
};
typedef struct depto Tdepto; // Definindo o typedef para a struct

// Função para imprimir os dados de um departamento
void imprimirDepto(Tdepto departamento) {
    printf("Quantidade: %d\n", departamento.qtd);
    printf("Soma: %.2f\n", departamento.soma);
}

int main() {
    // Criação de uma variável do tipo Tdepto (struct depto)
    Tdepto departamento1;

    // Atribuição de valores aos membros da struct
    departamento1.qtd = 10;
    departamento1.soma = 1000.0;

    // Chamada da função para imprimir os dados do departamento
    imprimirDepto(departamento1);

    return 0;
}
