#include <iostream>
#include <list>
#include <stdlib.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	list<int>lista;
	list<int>::iterator iter;
	lista.push_back(19);
	lista.push_back(57);
	lista.push_back(13);
	lista.push_back(21);
	cout<<"lista pre-ordenação: ";
	for(iter = lista.begin(); iter != lista.end(); iter++){
		cout<<" "<<*iter;
	}
	
	lista.sort( greater<int>() );
	
	cout<<endl<<"lista pós-ordenação: ";
	for(iter = lista.begin(); iter != lista.end(); iter++){
		cout<<" "<<*iter;
	}
	
	return 0;
}
