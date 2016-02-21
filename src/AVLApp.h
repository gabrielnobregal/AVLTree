/* Implementação do aplicativo de árvores AVL requisitado na atividade 03 da disciplinas de AED2, UFABC 2012.
 *autor:Gabriel Nobrega de Lima
*/

#ifndef AVLAPP_H
#define AVLAPP_H

#include <iostream>
#include <string.h>
#include <fstream>

#include "lib/AVLTree.h"

using namespace std;

class AVLApp{

private:
	BinaryTree *tree; // Árvore binária	
	string inputFile; // Arquivo de entrada
	string outputFile; // Arquivo de saída
public:
	~AVLApp();

	/* Executa as operações de árvore contidas no arquivo de caminho "inputFile". A saída de cada comando é gravada no arquivo com caminho "outputFile"	
	*/
	void process(string inputFile, string outputFile);
};

#endif
