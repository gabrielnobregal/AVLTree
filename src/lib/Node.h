/*Modela os nós de árvores binárias.
 *Autor: Gabriel Nobrega de Lima
*/

#ifndef NODE_H
#define NODE_H


class Node{

public:
	Node(int value, int balance, Node *left, Node *right);

	int balance; // Fator de balanço
	int value; // Chave
	Node *left; // Sub-árvore esquerda
	Node *right; // Sub-árvore direita
};

#endif
