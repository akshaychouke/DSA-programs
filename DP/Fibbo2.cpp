// program is to print the nth fibonacci number using DP  Tabulation method
// Tabulation is a bottom up approach
// In this method we will fill the dp array from the bottom to the top

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int dp[n+1];
    dp[0]=0;
    dp[1]=1;
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }
    cout<<dp[n]<<endl;
return 0;
}