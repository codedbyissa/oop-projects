#include <iostream>
#include <list>
#include <stdlib.h>
using namespace std;

int main() {
	list <int> lista;
	list <int>::iterator iter;
	lista.push_back(10);
	lista.push_back(20);
	lista.push_back(20);
	lista.push_back(30);
	lista.push_back(40);
	
	cout<<"lista antes da remoção itens de valor 20:"<<endl;
	for(iter = lista.begin(); iter != lista.end(); iter++ ){
		cout<<*iter<<endl;
	}
	
	lista.remove(20);
	
	cout<<"lista após remoção dos items de valor 20"<<endl;
	for(iter = lista.begin(); iter != lista.end(); iter++){
		cout<<*iter<<endl;
	}
	
	return 0;
}
