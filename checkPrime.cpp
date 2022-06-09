#include <iostream>

using namespace std;

void checkPrime(int n){
	
	int num =2;
	int flag=0;
	while(num<n){
		if(n%num==0){
			flag = 1;
			break;
		}
		else{
			num = num+1;
		}
	}
	
	if(flag==1){
		cout<<"Not Prime"<<endl;
	}
	else{
		cout<<"Prime"<<endl;	
	}	
	
}

int main(){
	int num;
	
	cout<<"Enter the number"<<endl;
	cin>>num;
	
	checkPrime(num);
	
	return 0;
}
