/*Find the average, maximum, minimum, and sum of three numbers 
given by the user. */
#include<iostream>
#include<algorithm>

using namespace std;

int main(){
      
      double a, b,c;
      double average;
    cout<<"Enter  the first value "; 
    cin>>a;  
    cout<<"Enter  the second value ";
    cin>>b;
    cout<<"Enter  the third value ";
    cin>>c;
    double sum=a+b+c;
    average=sum/3;
    double maximum=max(a,max(b,c));
    double minimum=min(a,min(b,c));
    cout<<"the average of the three number is "<<average<<endl;
    cout<<"the maximum froom three numbers is "<<maximum<<endl;
    cout<<"the minimum from three numbers is "<<minimum<<endl;

    return 0;
}