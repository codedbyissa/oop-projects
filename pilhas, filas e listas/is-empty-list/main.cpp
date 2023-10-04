#include <iostream>
#include <stdlib.h>
#include <list>
using namespace std;

int main() {
	list <int> lista;
	list <int>::iterator iter;
	
	for(int i=1; i<=5; i++){
		lista.push_back(i);
	}
	
	for(iter=lista.begin(); iter != lista.end(); iter++){
		cout<<*iter<<" ";
	}
	
	cout<<endl<<"Tamanho da lista: "<<lista.size()<<endl;
	lista.clear();
	if(lista.empty()){
		cout<<"sucesso, lista vazia";
	} else {
		cout<<"erro, lista não vazia";
	}
	return 0;
}
