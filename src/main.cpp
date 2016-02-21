#include <iostream>
#include "AVLApp.h"

using namespace std;

int main(int argc, char *argv[]){
	 
	
	if(argc<=2){
		cout<<"Sintaxe incorreta, utilize: ./avlapp arquivo_de_entrada arquivo_de_saida"<<endl<< "\t Por exemplo: ./avlapp input.txt output.txt"<<endl;		
	}else{
		AVLApp *app = new AVLApp();	
		app->process(argv[1], argv[2]);
		delete app;
	}
	return 0;
}
