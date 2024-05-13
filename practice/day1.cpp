#include<bits/stdc++.h>
using namespace std;

int rec(int n) {
    if(n==0) return 1;
    else return n*rec(n-1);
}

int main() {
    int n;
    cin>>n;

    int factorial = rec(n);
    cout<<"the factorial is : "<<factorial<<endl;
}



#include<bits/stdc++.h>
using namespace std;
int n;

void IncreasingNumbers(int i) {
    if(i<=n) {
        cout<<i<<" ";
        return IncreasingNumbers(i+1);
    }
}

void DecreasingNumbers(int i) {
    if(i>=0) {
        cout<<i<<" ";
        return DecreasingNumbers(i-1);
    }
}

int main() {
    cin>>n;

    IncreasingNumbers(0);
    cout<<endl;
    DecreasingNumbers(n);
}



#include<bits/stdc++.h>
using namespace std;

int n;

int power(int n,int p) {
    if(p==0) return 1;
    return n*power(n,p-1);

}

int main() {
    cin>>n;
    int p;
    cin>>p;

    int pow = power(n,p);
    cout<<pow<<endl;
}
