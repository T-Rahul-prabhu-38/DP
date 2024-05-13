/******************************************************************************

 - the fast power method is O( log(n) ).
 - the normal power method is O(n);
 - the fast method uses the idea = a^(n/2).
 
 - if the number is odd then it is a * (a^(n/2))^2 .
 - if the number is even then it is  (a^(n/2))^2 .


*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;

int n;

int power(int n,int p) {
    if(p==0) return 1;
    return n*power(n,p-1);

}

int fastpower(int n,int p) {

    if(p==0) return 1;
    
    int subprob = fastpower(n,p/2); 
    int subq = subprob*subprob;

    if(p&1) return n*subq;
    return subq;

} 


int main() {
    cin>>n;
    int p;
    cin>>p;

    int pow = power(n,p);
    cout<<pow<<endl;

    cout<<fastpower(n,p)<<endl;
}
