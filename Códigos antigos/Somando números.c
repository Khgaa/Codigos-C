

int main()
{
    int x;
    int qnt = 1;
    int soma;
    
    while (qnt <= 10){
     printf ("Digite um número: ");
     scanf ("%d", &x);
     qnt ++;
     soma = x + soma;
    }
    
    printf ("A soma dos números é: %d", soma);
    
    return 0;
}
