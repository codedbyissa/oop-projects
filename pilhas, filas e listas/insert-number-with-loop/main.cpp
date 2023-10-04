#include <iostream>
#include <stdlib.h>
#include <list>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	list <int> lista;
	list <int>::iterator iter;
	
	for(int i=1; i<=50; i++){
		lista.push_back(i);
	}
	
	for(iter = lista.begin(); iter != lista.end(); iter++){
		cout<<*iter<<" ";
	}
	
	
	return 0;
}
