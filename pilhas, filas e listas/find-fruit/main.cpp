#include <iostream>
#include <stdlib.h>
#include <algorithm>
#include <string>
#include <list>
using namespace std;
int main() {
	setlocale(LC_ALL, "portuguese");
	list <string> fruit;
	fruit.push_back("laranja");
	fruit.push_back("abacate");
	fruit.push_back("pera");
	fruit.push_back("uva");
	fruit.push_back("maracuja");

	string search;
	
	cout<<"insira o nome da fruta para descobrir se ela está presente na lista: ";
	cin>>search;
	
	list <string>::iterator iter=find(fruit.begin(), fruit.end(), search);
	int result = distance(fruit.begin(), iter) + 1;
	
	if(result <= fruit.size()){
		cout<<"sucesso! "<<search<<" se encontra na posição "<<result<<" da lista";
	} else {
		cout<<"erro! "<<search<<" não foi encontrado na lista";
	}
	return 0;
}
