#include <bits/stdc++.h>
using namespace std;

// void f(int i,int n){   //Print 1 to N
//     if(i>n)
//         return;

//     cout<<i<<" ";
//     f(i+1,n);
// }

// void fn(int i,int n){   //Print 1 to N (using backtrack)
//     if(i<1)
//         return;

//     fn(i-1,n);
//     cout<<i<<" ";
// }

// int main(){
//     f(1,3);
//     cout<<endl;
//     fn(3,3);
// }

//Sum of first N numbers  functional way
// int sum(int n){
//     if(n==1)
//         return 1;
//     return n + sum(n-1);
// }

// int main(){
//     cout<<sum(10)<<endl;
// }

//Factorial of N
int fact(int n){
    if(n==0)
        return 1;
    return n * fact(n-1);
}
int main(){
    cout<<fact(5)<<endl;
}