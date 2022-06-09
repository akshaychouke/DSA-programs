// Program to convert Decimal to Binary 

#include<iostream>
#include<math.h>
using namespace std;

int main(){
	int n;
	cout<<"Enter the nuber"<<endl;
	cin>>n;
	
	int i = 0 , ans = 0;
	
	while(n!=0){
		int bit = n&1;
		
		ans = (bit*pow(10,i)) + ans;
		
		n = n>>1;
		i++;
	}
	
	cout<<"The binary is "<<ans<<endl;
	
	return 0;
}
