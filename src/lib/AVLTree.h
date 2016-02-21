/*Implementa �rvores bin�rias AVL.
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
	Node *treeRoot; // Raiz da �rvore
	
	// Rota��es
	void leftSimpleRot(Node **node, Node *nodeFather);
	void rightSimpleRot(Node **node, Node *nodeFather);
	void rightDoubleRot(Node **node);
	void leftDoubleRot(Node **node);

	// Chamam os m�todos de rota��o de acordo com a demanda
	bool adjustLeftUnbalanced(Node **node, Node *nodeFather);
	bool adjustRightUnbalanced(Node **node,  Node *nodeFather);
	
	/* 
	* M�todos recursivos internos
	*/
	
	// Inser��o de n�s
	bool internalInsert(Node **node, Node *nodeFather, int value);
	
	// Busca na �rvore
	string internalTraceFind(Node *node, int value);
	bool internalFind(Node *node, int value);

	// Visualiza��o da �rvore	
	string internalViewTree(Node *node);
	string internalPreOrderedState(Node *node);
	
	// Libera��o de mem�ria
	void internalRelease(Node *node);

public:
	// Construtor
	AVLTree();
	// Destrutor
	~AVLTree();
	
	/*
	* M�todos da interface p�blica. Em sua maioria implementam os m�todos abstratos de BinaryTree
	*/
	void insert(int value); 
	
	// Imprime a �rvore em pr�-ordem seguindo a sintaxe (R,E,D)
	string preOrderedState(); 
	// Remove o n� de valor "value" da �rvore
	bool remove(int value); 
	// Procura o n� de valor "value". Retorna verdadeiro caso encontre, do contr�rio, falso
	bool find(int value); 
	// Retorna uma string com os n�s percorridos a partir da rais at� o n� de valor "value"
	string traceFind(int value);	
	// Retorna uma string identificando as configura��es de cada n�, tais como, fator de balanceamento, filho direito e filho 		esquerdo
	string viewTree();
	
	// Libera mem�ria. Geralmente n�o necess�rio, o destrutor chama autom�ticamente.	
	void release();
};


#endif
