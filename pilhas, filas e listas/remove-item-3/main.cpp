#include <iostream>
#include <list>
#include <stdlib.h>
using namespace std;

int main() {
	list<int> lista;
	setlocale(LC_ALL, "portuguese");
	lista.push_back(10);
	lista.push_back(15);
	lista.push_back(20);
	lista.push_back(25);
	lista.push_back(30);
	lista.push_back(35);
	list<int>::iterator iter = lista.begin(), iter2;
	cout<<"pr� remo��o do 3� item: "<<endl;
	for(iter2 = lista.begin(); iter2 != lista.end(); iter2++){
		cout<<" "<<*iter2;
	}
	advance(iter, 2);
	lista.erase(iter);
	cout<<endl<<"p�s remo��o do 3� item: "<<endl;
	for(iter2 = lista.begin(); iter2 != lista.end(); iter2++){
		cout<<" "<<*iter2;
	}
	
	return 0;
}
