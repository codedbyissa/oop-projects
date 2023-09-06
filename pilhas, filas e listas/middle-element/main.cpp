#include <iostream>
#include <stdlib.h>
#include <list>
#include <cmath>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	list<int>lista;
		lista.push_back(7);
		lista.push_back(34);
		lista.push_back(9);
		lista.push_back(8);
		lista.push_back(5);
		lista.push_back(4);
		lista.push_back(0);
	
	int middle = ceil(lista.size()/2);
	list<int>::iterator it = lista.begin();
	advance(it, middle);
	cout<<*it;
	return 0;
}
