#include <iostream>
#include <stdlib.h>
#include <list>
using namespace std;

int main(){
	setlocale(LC_ALL, "portuguse");
	list<string>lista;
	lista.push_back("um");
	lista.push_back("dois");
	lista.push_back("tres");
	lista.push_back("quatro");
	lista.push_back("cinco");
	list<string>::iterator it = lista.begin();
	
	for (int i=1; i<=lista.size(); i++){
		cout<<*it<<" ";
		advance(it, 1);
	}
	
	return 0;
}
