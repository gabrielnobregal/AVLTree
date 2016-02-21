/*Defini��o de interface p�blica para �rvores bin�rias.
 *Autor: Gabriel Nobrega de Lima
*/
#ifndef BINARYTREE_H
#define BINARYTREE_H

#include <string>

using namespace std;

class BinaryTree{
public:
	virtual void insert(int value) = 0; // Insere um n� na �rvore
	virtual string preOrderedState() = 0; // Retorna estado da �rvore em pr�-ordem
	virtual bool remove(int value) = 0; // Remove n�. Caso o n� n�o possa ser removido (n�o existe) retorna falso
	virtual bool find(int value) = 0; // Procura por uma chave na �rvore, caso exista retorna verdadeiro
	virtual string traceFind(int value) = 0; // Retorna os n�s visitados no processo de busca
	virtual void release() = 0; // Libera mem�ria de todos os n�s da �rvore
	virtual ~BinaryTree(){
	}
};



#endif
