#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <list>
using namespace std; 

int main(){
	setlocale(LC_ALL, "portuguese");
	list <int> lista;
	int search;
	for(int i=21; i<=57; i++){
		lista.push_back(i);
	}
	
	cout<<"insira o numero que deseja encontrar na lista: ";
	cin>>search;
	
	list <int>::iterator iter = find(lista.begin(), lista.end(), search);
	int result = distance(lista.begin(), iter) + 1;
//	for(iter=lista.begin(); iter != lista.end(); iter++){
//		cout<<*iter<<" ";
//	}
    if(result <= lista.size()){
    	cout<<"sucesso! o numero em questão está na posição: "<<result;
	} else {
		cout<<"erro, numero não encontrado!";
	}
	
	return 0;
}
