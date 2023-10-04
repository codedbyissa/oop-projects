#include <iostream>
#include <stdlib.h>
#include <list>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	list <int> lista;
	list <int>::iterator iter;
	
	for(int i=1020; i>=100; i--){
		lista.push_back(i);
	}
	
	cout<<"Lista pre-ordena��o: ";
	for(iter=lista.begin(); iter != lista.end(); iter++){
		cout<<*iter<<" ";
	}
	
	lista.sort();
	
	cout<<endl<<"Lista p�s-ordena��o: ";
	for(iter=lista.begin(); iter != lista.end(); iter++){
		cout<<*iter<<" ";
	}
	
	
	return 0;
}
