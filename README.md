# AVLTree

Este projeto foi feito com o objetivo de realizar um estudo sobre árvores AVL. O projeto foi feito em C++ e acompanha um relatório.

## Compilando e executando o projeto

O projeto foi desenvolvido em linguagem C++, sendo assim será necessário a utilização
do compilador g++. Tente executar o g++ pelo terminal, caso este não seja localizado
será necessário instala-lo. Nas distribuições derivadas do Debian (por ex:Ubuntu), a
instalação pode ser realizada através do comando:

sudo apt-get install g++

Com o compilador instalado o projeto pode ser compilado com o comando make
dentro do diretório src do projeto.

make

O comando irá gerar o binário avlapp dentro do diretório src. Para executa-lo utilize
o comando:

./avlapp 

Para eliminar todos os arquivos binários gerados no processo de compilação execute o comando:

make clear

## Parâmetros de Execução
O aplicativo permite a passagem de apenas dois parâmetros, o arquivo de entrada e o arquivo de saída. Por exemplo, caso você queira processar as operações do arquivo entrada.txt e obter os resultados no arquivo saida.txt, execute o programa com o comando:

./avlapp entrada.txt saida.txt 

Vale ressaltar que a passagem de parâmetros é obrigatória. Não existem valores padrões para os parâmetros caso eles sejam omitidos.
