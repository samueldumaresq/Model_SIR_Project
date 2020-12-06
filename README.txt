OPÇÃO DO README MAIS COMPLETO EM GOOGLE COLAB:
https://colab.research.google.com/drive/1zC-SVPmdbpaF5gavZ_psjsmZVBoAp5Xx?usp=sharing

AUTORES

Luís Manuel Esteves da Rocha Vieira - Matrícula: 20200004535 - E-mail: luisrv@ufrn.edu.br
Samuel Antônio Dumaresq de Souza - Matrícula: 20190049475 - E-mail: samueldumaresq@gmail.com

ENTREGAS NESTE CHECKPOINT 1

As três entregas foram contempladas e atendidas. 
O input "entrada.txt" é lido pelo programa, o qual roda o modelo e apresenta as 50 primeiras observações.
Em seguida gera-se um output "saida.csv" o qual contem 10.000 mil resultados.
Eventuais mensagens de erro na importação ou exportação também são apresentadas.
Dúvidas com relação à compilação e execução do código são esclarecidas abaixo neste README.txt.
Ademais, maiores detalhamentos das partes do código são encontrados em texto no corpo do mesmo.


COMPILAR E RODAR O PROGRAMA

Indicamos 2 formas para compilar e rodar o programa: 

1)Usando uma IDE Online - site Repl.it
  A forma mais simples de compilar e rodar o programa é utilizando a IDE online - site "www.repl.it".
  Adicione os arquivos em uma pasta virtual e execute o código. 
  O arquivo ".csv" será gerado nessa mesma pasta e disponibilizado para download.

2)Utilizando o promt de comando do Windows ou Linux
  Para utilizar no Windows ou Linux será necessário instalar previamente o compilador "gcc". 
  Recomenda-se que os arquivos de entrada de dados "entrada.txt" e o código "main.c" estejam na mesma pasta.
  Posto isto, abra o prompt de comando, navegue até à pasta onde estão os arquivos e digite "gcc -o simulador main.c". 
  Será criado um arquivo executável de nome "simulador.exe". 
  Execute o arquivo para gerar os resultados em formato ".csv" na mesma pasta.


ALGUMAS LIMITAÇÕES, DIFICULDADES E MELHORIAS PENSADAS PARA CHECKPOINT 2

1) 
O tamanho dos resultados a serem gerados pelo programa está limitado em 10.000 observações, equivalente a 1 mil horas ou cerca de 40 dias.
Trata-se de uma limitação arbitrária, em função do tamanho definido para a array (vetor).
Como melhoria será utilizada alocação dinâmica para otimizar o tamanho do vetor e a memória utilizada. Deste modo, empregando ponteiros também.

2)
Como valores de referência para os parâmetros base do modelo foi utilizado o exemplo dado no enunciado. 
Observa-se que para o checkpoint 2 será necessário, também, traçar cenários de contenção.
Neste sentido, propõe-se, como melhoria, buscar parâmetros mais realistas para os três cenários, embasados em estudos científicos e/ou dados reais sobre epidemias.

3)
O programa apenas gera os resultados em arquivo ".csv" sem, todavia, plotar os gráficos desses dados.
Será implementada como melhoria a geração desses gráficos no google colab utilizando a biblioteca matplotlib na linguagem python.

4)
Foi elaborado apenas um único arquivo "main.c" com todo o código e funções do programa. Como melhoria será feita a modularização do código. 
Criaremos um arquivo ".h" com as funções a serem utilizadas. Bem como outro arquivo ".c" com a parte do código relativa à aplicação do modelo.

5)
O arquivo README será incrementado. Inclusive, incluindo-se a explicação das variáveis e organização dos dados de entrada e saída.
A organização e documentação de código fonte será melhor tratada em formato como doxygen ou outro.