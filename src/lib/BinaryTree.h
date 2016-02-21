/*Definição de interface pública para árvores binárias.
 *Autor: Gabriel Nobrega de Lima
*/
#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <string>

using namespace std;

class BinaryTree{
public:
	virtual void insert(int value) = 0; // Insere um nó na árvore
	virtual string preOrderedState() = 0; // Retorna estado da árvore em pré-ordem
	virtual bool remove(int value) = 0; // Remove nó. Caso o nó não possa ser removido (não existe) retorna falso
	virtual bool find(int value) = 0; // Procura por uma chave na árvore, caso exista retorna verdadeiro
	virtual string traceFind(int value) = 0; // Retorna os nós visitados no processo de busca
	virtual void release() = 0; // Libera memória de todos os nós da árvore
	virtual ~BinaryTree(){
	}
};



#endif
