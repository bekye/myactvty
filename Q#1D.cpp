#include<iostream>
using namespace std;
void swap_call_val(int,int);
void swap_call_ref(int*,int*);
int main(){
	int a=1,b=2,c=3,d=4;
	cout<<"\n a= "<<a<<" and b="<<b;
	 swap_call_val(a,b);
	cout<<"\n a= "<<a<<" and b="<<b;
	
	cout<<"\n c= "<<c<<" and d="<<d;
	 swap_call_ref(&c,&d);
	cout<<"\n c= "<<c<<" and d="<<d;
	return 0;
	
}
void swap_call_val(int a,int b){
	int  temp=a;
	temp = a;
	a=b;
	b=temp;
	cout<<"\n a = "<<a<<" and b= "<<b;
}
void swap_call_ref(int*c,int*d){
	int temp=*c;
	  *c=*d;
	  *d=temp;
//	  cout<<"\n c= "<<c<<" and d = "<<d;
	  cout<<"\n c= "<<*c<<" and d = "<<*d;
}

