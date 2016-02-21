#include "AVLApp.h"

void AVLApp::process(string inputFile, string outputFile){
	tree = new AVLTree();
	ifstream inFile;
	

	inFile.open(inputFile);
		
	if(!inFile.good()){
		cout<<"Erro ao tentar abrir arquivo \""<<inputFile<<"\"..."<<endl;
		return;
	}
		
	ofstream outFile(outputFile);
	
	cout<<"Arquivo de Entrada:"<<inputFile<<endl;
	cout<<"Arquivo de Saida:"<<outputFile<<endl;
		
	cout<<"Processando..."<<endl;
	char buf[255];
	
	// O arquivo de entrada n�o pode ter uma linha a mais ao final da ultima instru��o de execu��o
	while(inFile.getline(buf, '\n')){		
		
		// Verificando se o comando � valido (deve ter no m�nimo 3 caracteres, previne pulos de linhas em branco)
		if(strlen(buf)<3)
			continue;

		cout<<"Comando: "<<buf<<endl;
		
		outFile << buf <<endl;
			
		const char* cmd[2]= {0};
		
		cmd[0] = strtok(buf, " ");
		cmd[1] = strtok(NULL, " ");
					
		int nodeVal = atoi(cmd[1]);
						
		if(strcmp(cmd[0],"i") == 0){
			tree->insert(nodeVal);
			outFile<<tree->preOrderedState()<<endl;
			cout<<"Inserindo "<< nodeVal<<" ..."<<endl;
		}else
		if(strcmp(cmd[0],"b") == 0){
			string traceFind = tree->traceFind(nodeVal);
			cout<<"Buscando no "<< nodeVal << ": "<<  traceFind<<" ..."<<endl;
			outFile<<traceFind<<endl;
		}		
	}

	inFile.close();
	outFile.close();
	
	cout<<"Processamento finalizado..."<<endl;
	((AVLTree*)tree)->viewTree();
}

AVLApp::~AVLApp(){
	delete tree;
}
