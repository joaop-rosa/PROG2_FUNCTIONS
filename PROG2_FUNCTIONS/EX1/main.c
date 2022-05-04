#include <stdio.h>
#include <string.h>
#include <ctype.h>

void vogais_consoantes(char string[100], int* quantidadeConsoantes, int* quantidadeVogais){
    int vogais = 0;
    int consoantes = 0;
    for (int i = 0; i < strlen(string); ++i) {
        if(isalpha(string[i])){
            switch (tolower(string[i])) {
                case 'a':
                    vogais++;
                    break;
                case 'e':
                    vogais++;
                    break;
                case 'i':
                    vogais++;
                    break;
                case 'o':
                    vogais++;
                    break;
                case 'u':
                    vogais++;
                    break;
                default:
                    consoantes++;
                    break;
            }
        }
    }
    *quantidadeConsoantes = consoantes;
    *quantidadeVogais = vogais;
}
void primeira_ulmita_letra(char string[100], char letras[3]){
    letras[0] = toupper(string[0]);
    letras[1] = toupper(string[strlen(string)-2]);
    letras[2] = '\0';
}


int main() {
    int quantVogais;
    int quantConsoantes;
    char letras[3];
    char stringFrase[100] = "";
    printf("Informe uma frase:\n");
    fgets(stringFrase, 100, stdin);
    stringFrase[strlen(stringFrase)+1] = '\0';

    vogais_consoantes(stringFrase, &quantConsoantes, &quantVogais);
    primeira_ulmita_letra(stringFrase,letras);
    printf("quantidade de letras: %d\n",quantVogais+quantConsoantes);
    printf("quantidade de vogais: %d\n",quantVogais);
    printf("quantidade de consoantes: %d\n",quantConsoantes);
    printf("Primeiro e ultimo caracteres concatenados, e em maiusculo: %s",letras);
}
