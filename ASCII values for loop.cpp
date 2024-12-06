#include<iostream>
using namespace std;
int main(){
	for(char ch='a';ch<='g';ch++){
		for(char Et='a';Et<=ch;Et++)
		cout<<Et<<" ";
		cout<<endl;
	}
	return 0;
}
