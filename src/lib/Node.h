/*Modela os n�s de �rvores bin�rias.
 *Autor: Gabriel Nobrega de Lima
*/

#ifndef NODE_H
#define NODE_H


class Node{

public:
	Node(int value, int balance, Node *left, Node *right);

	int balance; // Fator de balan�o
	int value; // Chave
	Node *left; // Sub-�rvore esquerda
	Node *right; // Sub-�rvore direita
};

#endif
