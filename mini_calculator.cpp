#include<iostream>
using namespace std;

int main(){
		
	int a,b;
	
	cout<<"Ehnter the value of a"<<endl;
	cin>>a;
	
	cout<<"Enter the value of b"<<endl;
	cin>>b;
	
	cout<<"*****************Enter any of the following operation***************"<<endl;
	cout<<"+ , - , * , / , % "<<endl;
	
	char ch;
	cin>>ch;
	
	switch(ch){
		case '+':
			cout<<a<<"+"<<b<<" = "<<a+b<<endl;
			break;
		case '-':
			cout<<a<<"-"<<b<<" = "<<a-b<<endl;
			break;
		case '*':
			cout<<a<<"*"<<b<<" = "<<a*b<<endl;
			break;
		case '/':
			cout<<a<<"/"<<b<<" = "<<a/b<<endl;
			break;
		case '%':
			cout<<a<<"%"<<b<<" = "<<a%b<<endl;
			break;
		default:
			cout<<"Invalid input please enter valid"<<endl;
	}
	
	return 0;
}
