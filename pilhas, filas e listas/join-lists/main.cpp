#include <iostream>
#include <stdlib.h>
#include <list>
using namespace std;

int main() {
	list<int>l1, l2, l3;
	l1.push_back(21);
	l1.push_back(19);
	l2.push_back(12);
	l2.push_back(91);
	list<int>::iterator it1 = l1.begin();
	list<int>::iterator it2 = l2.begin();
    
	for(int i=1; i<=l1.size(); i++){
		l3.push_back(*it1);
        advance(it1, 1);
	}
    
	for(int j=1; j<=l2.size(); j++){
		l3.push_back(*it2);
        advance(it2, 1);
	}
    
	list<int>::iterator it3 = l3.begin();
	cout<<l3.size()<<":";
	for(int k=1; k<=l3.size(); k++){
		cout<<*it3<<" ";
        advance(it3, 1);
	}
	
	return 0;
}
