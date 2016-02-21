#Makefile para a construção do projeto Lab03
#Criado por: Gabriel Nobrega de Lima
#Disciplina: Algoritmo e Estrutura de Dados II

LIB=lib/

CC=g++

all: main
	$(CC) main.o AVLApp.o AVLTree.o Node.o -o avlapp

main:AVLApp
	$(CC) -c main.cpp

AVLApp:AVLTree
	$(CC)  -std=c++0x -c AVLApp.cpp

AVLTree:Node
	$(CC) -c $(LIB)AVLTree.cpp

Node:
	$(CC) -c $(LIB)Node.cpp

clear:
	rm *.o avlapp
