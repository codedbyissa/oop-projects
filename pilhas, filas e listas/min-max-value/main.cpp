#include <iostream>
#include <list>
#include <stdlib.h>
using namespace std;

int main() {
	
	setlocale(LC_ALL, "portuguese");
	list<int> lista;
	list<int>::iterator iter;
	int value;
	
	cout<<"digite..."<<endl;
	
	for(int i = 1; i <= 8; i++){
	cout<<"o "<<i<<"� valor: ";
	cin>>value;
	lista.push_back(value);
	}
	
	int maxValue;
	int minValue;
	
	for(iter=lista.begin(); iter != lista.end(); iter++){
		
		if(maxValue < *iter){
			maxValue=*iter;
		} 
		
		if(minValue > *iter){
			minValue=*iter;
		}
		
	}
	
	cout<<"o menor valor �: "<<minValue<<" e o maior �: "<<maxValue;


	return 0;
}
