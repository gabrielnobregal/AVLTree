/*Implementa árvores binárias AVL.
 *Autor: Gabriel Nobrega de Lima
*/

#ifndef AVLTREE_H
#define AVLTREE_H

#include <string>
#include <sstream>
#include <iostream>

#include "BinaryTree.h"
#include "Node.h"


using namespace std;

class AVLTree: public BinaryTree{
private:
	Node *treeRoot; // Raiz da árvore
	
	// Rotações
	void leftSimpleRot(Node **node, Node *nodeFather);
	void rightSimpleRot(Node **node, Node *nodeFather);
	void rightDoubleRot(Node **node);
	void leftDoubleRot(Node **node);

	// Chamam os métodos de rotação de acordo com a demanda
	bool adjustLeftUnbalanced(Node **node, Node *nodeFather);
	bool adjustRightUnbalanced(Node **node,  Node *nodeFather);
	
	/* 
	* Métodos recursivos internos
	*/
	
	// Inserção de nós
	bool internalInsert(Node **node, Node *nodeFather, int value);
	
	// Busca na árvore
	string internalTraceFind(Node *node, int value);
	bool internalFind(Node *node, int value);

	// Visualização da árvore	
	string internalViewTree(Node *node);
	string internalPreOrderedState(Node *node);
	
	// Liberação de memória
	void internalRelease(Node *node);

public:
	// Construtor
	AVLTree();
	// Destrutor
	~AVLTree();
	
	/*
	* Métodos da interface pública. Em sua maioria implementam os métodos abstratos de BinaryTree
	*/
	void insert(int value); 
	
	// Imprime a árvore em pré-ordem seguindo a sintaxe (R,E,D)
	string preOrderedState(); 
	// Remove o nó de valor "value" da árvore
	bool remove(int value); 
	// Procura o nó de valor "value". Retorna verdadeiro caso encontre, do contrário, falso
	bool find(int value); 
	// Retorna uma string com os nós percorridos a partir da rais até o nó de valor "value"
	string traceFind(int value);	
	// Retorna uma string identificando as configurações de cada nó, tais como, fator de balanceamento, filho direito e filho 		esquerdo
	string viewTree();
	
	// Libera memória. Geralmente não necessário, o destrutor chama automáticamente.	
	void release();
};


#endif
