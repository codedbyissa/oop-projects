#include <iostream>
#include <stdlib.h>
#include <string>
#include <list>
using namespace std;

int main() {
	setlocale(LC_ALL, "portuguese");
	list <string> names;
	list <string>::iterator iter;
	string last;
	names.push_back("lucas");
	names.push_back("nollan");
	cout<<"Digite os nomes que quer inserir na lista, quando estiver satisfeito digite 'fim': "<<endl;
	while(last != "fim"){
		cin>>last;
		if(last != "fim"){
			names.push_back(last);
		}
	}
	
	cout<<"sua lista atual: ";
	for(iter = names.begin(); iter != names.end(); iter++){
		cout<<*iter<<" ";
	}
	names.sort();
	cout<<endl<<"sua lista após ser ordenada alfabeticamente: ";
	for(iter = names.begin(); iter != names.end(); iter++){
	cout<<*iter<<" ";
	}
	return 0;
}
