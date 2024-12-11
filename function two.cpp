#include<iostream>
using namespace std;
int my_pattern(int num1){
int i;
	for(int i=1; i<=num1;++i){
		for(int j=i;j<=num1;++j){
				cout<<" ";}
	       for(int k=1;k<=(2*i-1);k++){
			cout<<"*";
		}	
            cout<<endl;	
		}	
}
int sumEven(int i){

 int sum=0;
for(int i=0;i<=10;i+=2){
	sum+=i;
}
 cout<<"the sum of even numbers between 1-10 is "<<sum<<endl;
}
long long factorial(int n);
 int main(){
 	int num;
 	cout<<"enter the value for num ";
    cin>>num;
 		int a;
	cout<<"enter value fro a ";
	cin>>a;
 	sumEven(num);
 	if(num<0){
 		cout<<" ivalide value "<<endl;
	 }else{
	 	cout<<"\nThe factorial of "<<num<<" is "<<factorial(num)<<endl; 	
	 	cout<<endl;
	 }
	 	my_pattern(a);		
	return 0;
}
long long factorial(int n){
	long long result = 1;
	 for(int i=1;i<=n; i++){
	 	result*= i;
	 } return result;
	 }

	


