# include <stdio.h>
# include <string.h>
# include <stdlib.h>

int main() {

    /*Declaração das variáveis... obs.: hacm é horas acumuladas*/
    double S0, I0, R0, h, Nb, Tb, Sb0, Ib0, mk, nk, Tk;
    double S[10000], I[10000], R[10000], tempo[10000];
    int t;

    /*Declaração de ponteiro para referência do arquivo*/
    FILE *entrada;

    /*Abrindo o arquivo de entrada no modo "read" (leitura)*/
    entrada = fopen("entrada.txt", "r");

    /*Aviso - Testagem para erro de abertura*/
    if (entrada == NULL) {
        printf ("Houve um erro na abertura do arquivo.\n");
    }

    /*Leitura dos dados com fscanf (arquivo, formatação, variáveis)*/
    fscanf (entrada, "%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf,%lf\n", &S0, &I0, &R0, &h, &Nb, &Tb, &Sb0, &Ib0, &mk, &nk, &Tk);

    /*Aviso - Confirma a leitura dos dados*/
    printf("Seus dados foram importados.\n");

    /*Cálculo dos parâmetros "b" e "k"*/
    double b = Nb / ( Tb * Sb0 * Ib0);
    double k = mk / ( nk * Tk);

    /*Cálculo Modelo SIR */
    S[0]=S0;
    I[0]=I0;
    R[0]=R0;
    tempo[0]=0;

    for (int t = 1; t < 10000; t++) {
        S[t] = S[t-1] - h * b * S[t-1] * I[t-1];
        I[t] = I[t-1] + h * (b * S[t-1] * I[t-1] - k * I[t-1]);
        R[t] = R[t-1] + h * k * I[t-1];
        tempo[t] = tempo[t-1]+h;
    }

    /*Mostrar as primeiras 50 observações - será um futura função na biblioteca a ser criada */

    printf("\nOs primeiros 50 resultados do modelo: \n\n");

    for (int t = 1; t < 50; t++) {
        printf("%.3f,%.4f,%f,%.1f\n", S[t], I[t], R[t], tempo[t]);
    }

    /*Gerar arquivo de saida - modo w+ (lê, escreve e cria, se necessário)*/
    FILE *saida = fopen("saida.csv", "w+");

    /*Aviso - Testagem para erro de abertura*/
    if(saida == NULL){
         printf ("Houve um erro na abertura do arquivo.\n");
    }

    /*Laço para impressão*/
    for(t = 0; t < 10000; t++){
        fprintf(saida, "%.3f,%.4f,%f,%.1f\n", S[t], I[t], R[t], tempo[t]);
    }

    /*Aviso - Confirma que o arquivo final está pronto*/
    printf("\nO arquivo completo, em csv, foi gerado.\n");

    return 0;
}