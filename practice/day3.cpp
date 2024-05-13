#include<bits/stdc++.h>
using namespace std;

int cnt = 0;
vector<int>memo;

int fib(int n) {
    cnt++;
    if(n<=2)return 1;
    
    if (memo[n]!=-1) return memo[n];
    return memo[n] = fib(n-1) + fib(n-2);
}

int main() {
    int number;
    cin>>number;

    memo.resize(number+1,-1);

    cout<<"the answer is : "<<fib(number)<<endl;
    cout<<"the count is : "<<cnt<<endl;
}