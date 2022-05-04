#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int soma(int x, int y){
    return x + y;
}
int subtracao(int x, int y){
    return x - y;
}
int multiplicacao(int x, int y){
    return x * y;
}
double divisao(int x, int y){
    return x / y;
}
int restoDivisao(int x, int y){
    return x % y;
}
int exponciacao(int x, int y){
    return pow(x,y);
}

int main() {
    int operacao;
    int resp;
    int x,y;
    int resultadoInteiro;
    double resultadoDouble;
    do {
        printf("Informe o digito da operação que deseja:\n1 - SOMA | 2 - SUBTRACAO | 3 - MULTIPLICACAO | 4 - DIVISAO | 5 - RESTO DE DIVISAO | 6 - EXPONENCIACAO \n");
        scanf("%d",&operacao);
        printf("operacao: %d\n",operacao);
        printf("Informe o primeiro numero: ");
        scanf("%d",&x);
        printf("Informe o segundo numero: ");
        scanf("%d",&y);
        if(operacao == 1){
            resultadoInteiro = soma(x,y);
            printf("\nRESULTADO: %d + %d = %d\n",x,y,resultadoInteiro);
        } else if (operacao == 2){
            resultadoInteiro = subtracao(x,y);
            printf("RESULTADO: %d - %d = %d\n",x,y,resultadoInteiro);
        } else if(operacao == 3){
            resultadoInteiro = multiplicacao(x,y);
            printf("RESULTADO: %d x %d = %d\n",x,y,resultadoInteiro);
        } else if(operacao == 4){
            resultadoDouble = divisao(x,y);
            printf("RESULTADO: %d / %d = %f\n",x,y,resultadoDouble);
        } else if(operacao == 5){
            resultadoInteiro = restoDivisao(x,y);
            printf("RESULTADO: %d mod %d = %d\n",x,y,resultadoInteiro);
        } else if(operacao == 6){
            resultadoInteiro = exponciacao(x,y);
            printf("RESULTADO: %d ^ %d = %d\n",x,y,resultadoInteiro);
        } else {
            printf("Operacao Invalidada\n");
        }


        printf("Digite: 1 para repetir\n");
        scanf("%d",&resp);

    } while (resp == 1);
}
