#include <iostream>
#include <stdlib.h>
#include <list>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	int val1, val2, val3, val4;
	list<int>lista;
	
	
	cout<<"Forne�a o primeiro valor: ";
	cin>>val1;
	lista.push_back(val1);
	cout<<"Forne�a o segundo valor: ";
	cin>>val2;
	lista.push_back(val2);
	cout<<"Forne�a o terceiro valor: ";
	cin>>val3;
	lista.push_back(val3);
	cout<<"Forne�a o quarto valor: ";
	cin>>val4;
	lista.push_back(val4);
	
	lista.pop_front();
	lista.pop_front();
	lista.pop_front();
	lista.pop_front();
	
	if(lista.empty()){
		cout<<"lista esvaziada com sucesso!";
	} else {
		cout<<"erro, lista n�o esvaziada"; 
	}
	
	return 0;
}
