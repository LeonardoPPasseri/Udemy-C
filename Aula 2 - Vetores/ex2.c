
int main(){

    int a[10],b[10],c[10];
    int i;

    for(i = 0;i < 10;i++){
        printf("Digite o elemento(A) %d: ",i+1);
        scanf("%d",&a[i]);
    }

    for(i = 0;i < 10;i++){
        printf("Digite o elemento(B) %d: ",i+1);
        scanf("%d",&b[i]);
    }

    for(i = 0;i < 10;i++){
        c[i] = a[i] + b[i];
    }

    printf("\nA ==> ");
    for(i = 0;i < 10;i++){
        printf("%d ",a[i]);
    }
        printf("\nB ==> ");
     for(i = 0;i < 10;i++){
        printf("%d ",b[i]);
    }

    printf("\nC ==> ");
    for(i = 0;i < 10;i++){
        printf("%d ",c[i]);
    }

    return 0;
}